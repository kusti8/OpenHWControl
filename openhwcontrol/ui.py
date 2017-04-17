#!/usr/bin/env python3
VERSION="1.0.0"
import sys
import threading
import subprocess
import os
import types
import ctypes
import urllib.request
from PyQt5.QtCore import Qt
from PyQt5.QtGui import *
from PyQt5.QtWidgets import QGridLayout, QLabel, QLineEdit, QMessageBox, QColorDialog
from PyQt5.QtWidgets import QTextEdit, QWidget, QMainWindow, QApplication, QListWidgetItem
from PyQt5 import QtCore, QtWidgets, QtGui

from hue_plus import hue
import serial
from serial.tools import list_ports

from hue_plus import webcolors

from openhwcontrol import gui
from openhwcontrol import cooler
from openhwcontrol import grid
from openhwcontrol import helper
from openhwcontrol import openhwmon
from openhwcontrol import polling
from openhwcontrol import settings

# import gui
# import cooler
# import grid
# import helper
# import openhwmon
# import polling
# import settings

import usb.core

def is_admin():
    if os.name == 'nt':
        # WARNING: requires Windows XP SP2 or higher!
        try:
            return ctypes.windll.shell32.IsUserAnAdmin()
        except:
            return False
    else:
        return True

def runAsAdmin():

    if os.name != 'nt':
        return
    else:
        ctypes.windll.shell32.ShellExecuteW(None, "runas", sys.executable, "", None, 1)

def main():
    #if os.geteuid() != 0:
    #    sys.exit("You need to have root privileges to run this script.\nPlease try again, this time using 'sudo'.")
    #if not is_admin():
    #    runAsAdmin()
    app = QApplication(sys.argv)
    form = MainWindow()
    form.show()
    sys.exit(app.exec_())

def closest_colour(requested_colour):
    min_colours = {}
    for key, name in webcolors.css3_hex_to_names.items():
        r_c, g_c, b_c = webcolors.hex_to_rgb(key)
        rd = (r_c - requested_colour[0]) ** 2
        gd = (g_c - requested_colour[1]) ** 2
        bd = (b_c - requested_colour[2]) ** 2
        min_colours[(rd + gd + bd)] = name
    return min_colours[min(min_colours.keys())]

def get_colour_name(requested_colour):
    try:
        closest_name = actual_name = webcolors.rgb_to_name(requested_colour)
    except ValueError:
        closest_name = closest_colour(requested_colour)
        actual_name = None
    return actual_name, closest_name

def find_between( s, first, last ):
    try:
        start = s.index( first ) + len( first )
        end = s.index( last, start )
        return s[start:end]
    except ValueError:
        return ""

def pick(n):
    c = QColorDialog.getColor()
    if c.isValid():
        return c.name()[1:].upper()
def versiontuple(v):
    return tuple(map(int, (v.split("."))))

class MainWindow(QMainWindow, gui.Ui_MainWindow):
    def __init__(self):
        super(MainWindow, self).__init__()
        self.setupUi(self)

        self.indexApply = {
            0: self.fixedApply,
            1: self.breathingApply,
            2: self.fadingApply,
            3: self.marqueeApply,
            4: self.coverMarqueeApply,
            5: self.pulseApply,
            6: self.spectrumApply,
            7: self.alternatingApply,
            8: self.candleApply,
            9: self.wingsApply,
            10: self.audioLevelApply,
            11: self.profileApply
            }
        self.indexDevices = {
            0: self.presetModeWidget,
            1: self.krakenApplyFunc
        }

        self.fixedAdd.clicked.connect(self.fixedAddFunc)
        self.fixedDelete.clicked.connect(self.fixedDeleteFunc)
        self.breathingAdd.clicked.connect(self.breathingAddFunc)
        self.breathingDelete.clicked.connect(self.breathingDeleteFunc)
        self.fadingAdd.clicked.connect(self.fadingAddFunc)
        self.fadingDelete.clicked.connect(self.fadingDeleteFunc)
        self.marqueeAdd.clicked.connect(self.marqueeAddFunc)
        self.marqueeDelete.clicked.connect(self.marqueeDeleteFunc)
        self.coverMarqueeAdd.clicked.connect(self.coverMarqueeAddFunc)
        self.coverMarqueeDelete.clicked.connect(self.coverMarqueeDeleteFunc)
        self.pulseAdd.clicked.connect(self.pulseAddFunc)
        self.pulseDelete.clicked.connect(self.pulseDeleteFunc)
        self.alternatingAdd.clicked.connect(self.alternatingAddFunc)
        self.alternatingDelete.clicked.connect(self.alternatingDeleteFunc)
        self.candleAdd.clicked.connect(self.candleAddFunc)
        self.candleDelete.clicked.connect(self.candleDeleteFunc)
        self.wingsAdd.clicked.connect(self.wingsAddFunc)
        self.wingsDelete.clicked.connect(self.wingsDeleteFunc)
        self.audioLevelAdd.clicked.connect(self.audioLevelAddFunc)
        self.audioLevelDelete.clicked.connect(self.audioLevelDeleteFunc)
        self.profileAdd.clicked.connect(self.profileAddFunc)
        self.profileDelete.clicked.connect(self.profileDeleteFunc)
        self.profileRefresh.clicked.connect(self.profileListFunc)
        self.krakenMainAdd.clicked.connect(self.krakenMainAddFunc)
        self.krakenMainDelete.clicked.connect(self.krakenMainDeleteFunc)
        self.krakenAlternateAdd.clicked.connect(self.krakenAlternateAddFunc)
        self.krakenAlternateDelete.clicked.connect(self.krakenAlternateDeleteFunc)
        self.applyBtn.clicked.connect(self.applyFunc)

        if os.name == 'nt':
            self.portTxt.setText('COM3')
        self.update()
        port = self.get_port()
        if port:
            self.portTxt.setText(self.get_port())

        self.profileListFunc()
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                hue.write_previous(ser)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

        if list(usb.core.find(idVendor=0x2433, idProduct=0xb200, find_all=True)):
            self.cooler = cooler.Cooler(0x2433, 0xb200)
        else:
            self.cooler = None
            print("None")

        # Grid+ Init
        self.lock = threading.Lock()
        self.ser = serial.Serial()
        self.hwmon = openhwmon.initialize_hwmon()
        self.config = QtCore.QSettings('OpenHWControl', 'App')
        self.serial_ports = grid.get_serial_ports()
        self.comboBoxComPorts.addItems(self.serial_ports)
        openhwmon.populate_tree(self.hwmon, self.treeWidgetHWMonData)
        settings.read_settings(self.config, self, self.hwmon)
        self.thread = polling.PollingThread(polling_interval=int(self.comboBoxPolling.currentText()),
                                            ser=self.ser,
                                            lock=self.lock,
                                            cpu_sensor_ids=self.get_cpu_sensor_ids(),
                                            gpu_sensor_ids=self.get_gpu_sensor_ids(),
                                            cpu_calc="Max" if self.radioButtonCPUMax.isChecked() else "Avg",
                                            gpu_calc="Max" if self.radioButtonGPUMax.isChecked() else "Avg")
        self.setup_ui_logic()
        self.setup_ui_design()
        self.manual_value_fan1 = self.horizontalSliderFan1.value()
        self.manual_value_fan2 = self.horizontalSliderFan2.value()
        self.manual_value_fan3 = self.horizontalSliderFan3.value()
        self.manual_value_fan4 = self.horizontalSliderFan4.value()
        self.manual_value_fan5 = self.horizontalSliderFan5.value()
        self.manual_value_fan6 = self.horizontalSliderFan6.value()
        self.init_communication()

    #GridControl
    def setup_ui_logic(self):
        """Define QT signal and slot connections and initializes UI values."""

        # Update "Fan percentage" LCD values from horizontal sliders initial value
        self.lcdNumberFan1.display(self.horizontalSliderFan1.value())
        self.lcdNumberFan2.display(self.horizontalSliderFan2.value())
        self.lcdNumberFan3.display(self.horizontalSliderFan3.value())
        self.lcdNumberFan4.display(self.horizontalSliderFan4.value())
        self.lcdNumberFan5.display(self.horizontalSliderFan5.value())
        self.lcdNumberFan6.display(self.horizontalSliderFan6.value())

        # Update "fan labels" from "Fan Config" tab
        self.groupBoxFan1.setTitle(self.lineEditFan1.text())
        self.groupBoxFan2.setTitle(self.lineEditFan2.text())
        self.groupBoxFan3.setTitle(self.lineEditFan3.text())
        self.groupBoxFan4.setTitle(self.lineEditFan4.text())
        self.groupBoxFan5.setTitle(self.lineEditFan5.text())
        self.groupBoxFan6.setTitle(self.lineEditFan6.text())

        self.groupBoxCurrentFan1.setTitle(self.lineEditFan1.text())
        self.groupBoxCurrentFan2.setTitle(self.lineEditFan2.text())
        self.groupBoxCurrentFan3.setTitle(self.lineEditFan3.text())
        self.groupBoxCurrentFan4.setTitle(self.lineEditFan4.text())
        self.groupBoxCurrentFan5.setTitle(self.lineEditFan5.text())
        self.groupBoxCurrentFan6.setTitle(self.lineEditFan6.text())

        self.groupBoxConfigFan1.setTitle(self.lineEditFan1.text())
        self.groupBoxConfigFan2.setTitle(self.lineEditFan2.text())
        self.groupBoxConfigFan3.setTitle(self.lineEditFan3.text())
        self.groupBoxConfigFan4.setTitle(self.lineEditFan4.text())
        self.groupBoxConfigFan5.setTitle(self.lineEditFan5.text())
        self.groupBoxConfigFan6.setTitle(self.lineEditFan6.text())

        #  Connect events from sliders to update "Fan percentage" LCD value
        self.horizontalSliderFan1.valueChanged.connect(self.lcdNumberFan1.display)
        self.horizontalSliderFan2.valueChanged.connect(self.lcdNumberFan2.display)
        self.horizontalSliderFan3.valueChanged.connect(self.lcdNumberFan3.display)
        self.horizontalSliderFan4.valueChanged.connect(self.lcdNumberFan4.display)
        self.horizontalSliderFan5.valueChanged.connect(self.lcdNumberFan5.display)
        self.horizontalSliderFan6.valueChanged.connect(self.lcdNumberFan6.display)

        # Connect "Manual/Automatic" fan control radio button
        self.radioButtonManual.toggled.connect(self.disable_enable_sliders)

        # Connect "Simulated temperatures" checkbox
        self.checkBoxSimulateTemp.stateChanged.connect(self.simulate_temperatures)

        # Connect "Restart Communication" button
        self.pushButtonRestart.clicked.connect(self.restart)

        # Connect "Add CPU sensors" button
        self.pushButtonAddCPUSensor.clicked.connect(self.add_cpu_sensors)

        # Connect "Add GPU sensors" button
        self.pushButtonAddGPUSensor.clicked.connect(self.add_gpu_sensors)

        # Connect "Remove CPU sensors" button
        self.pushButtonRemoveCPUSensor.clicked.connect(self.remove_cpu_sensors)

        # Connect "Remove GPU sensors" button
        self.pushButtonRemoveGPUSensor.clicked.connect(self.remove_gpu_sensors)

        # Connect event from changed serial port combo box
        self.comboBoxComPorts.currentIndexChanged.connect(self.init_communication)

        # Connect event from changed polling interval combo box
        self.comboBoxPolling.currentIndexChanged.connect(self.init_communication)

        # Update fan voltage (speed) based on changes to the horizontal sliders
        #
        # "grid.calculate_voltage" converts the percent value to valid voltages supported by the Grid
        # "lambda" is needed to send four arguments (serial object, fan id, fan voltage and lock object)
        self.horizontalSliderFan1.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=1, voltage=grid.calculate_voltage(self.lcdNumberFan1.value()) ,lock=self.lock))

        self.horizontalSliderFan2.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=2, voltage=grid.calculate_voltage(self.lcdNumberFan2.value()), lock=self.lock))

        self.horizontalSliderFan3.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=3, voltage=grid.calculate_voltage(self.lcdNumberFan3.value()), lock=self.lock))

        self.horizontalSliderFan4.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=4, voltage=grid.calculate_voltage(self.lcdNumberFan4.value()), lock=self.lock))

        self.horizontalSliderFan5.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=5, voltage=grid.calculate_voltage(self.lcdNumberFan5.value()), lock=self.lock))

        self.horizontalSliderFan6.valueChanged.connect(
            lambda: grid.set_fan(ser=self.ser, fan=6, voltage=grid.calculate_voltage(self.lcdNumberFan6.value()), lock=self.lock))

        # Connect "Change value" events from "Fan config" tab (all "spin boxes") to verify that the values are valid
        for fan in range(1, 7):
            getattr(self, "spinBoxMinSpeedFan" + str(fan)).valueChanged.connect(self.validate_fan_config)
            getattr(self, "spinBoxStartIncreaseSpeedFan" + str(fan)).valueChanged.connect(self.validate_fan_config)
            getattr(self, "spinBoxIntermediateSpeedFan" + str(fan)).valueChanged.connect(self.validate_fan_config)
            getattr(self, "spinBoxMaxSpeedFan" + str(fan)).valueChanged.connect(self.validate_fan_config)
            getattr(self, "spinBoxIntermediateTempFan" + str(fan)).valueChanged.connect(self.validate_fan_config)
            getattr(self, "spinBoxMaxTempFan" + str(fan)).valueChanged.connect(self.validate_fan_config)

        # Connect fan rpm signal (from polling thread) to fan rpm label
        self.thread.rpm_signal_fan1.connect(self.labelRPMFan1.setText)
        self.thread.rpm_signal_fan2.connect(self.labelRPMFan2.setText)
        self.thread.rpm_signal_fan3.connect(self.labelRPMFan3.setText)
        self.thread.rpm_signal_fan4.connect(self.labelRPMFan4.setText)
        self.thread.rpm_signal_fan5.connect(self.labelRPMFan5.setText)
        self.thread.rpm_signal_fan6.connect(self.labelRPMFan6.setText)

        # Connect fan voltage signal (from polling thread) to fan voltage value
        self.thread.voltage_signal_fan1.connect(self.labelVFan1.setText)
        self.thread.voltage_signal_fan2.connect(self.labelVFan2.setText)
        self.thread.voltage_signal_fan3.connect(self.labelVFan3.setText)
        self.thread.voltage_signal_fan4.connect(self.labelVFan4.setText)
        self.thread.voltage_signal_fan5.connect(self.labelVFan5.setText)
        self.thread.voltage_signal_fan6.connect(self.labelVFan6.setText)

        # Connect CPU and GPU temperature signals (from polling thread) to GPU and CPU LCD values
        self.thread.cpu_temp_signal.connect(self.lcdNumberCurrentCPU.display)
        self.thread.gpu_temp_signal.connect(self.lcdNumberCurrentGPU.display)

        # Connect update signal to fan update function
        self.thread.update_signal.connect(self.update_fan_speed)

        # Connect CPU and GPU temperature signals (from polling thread) to function for updating HWMon status
        self.thread.hwmon_status_signal.connect(self.labelHWMonStatus.setText)

        # Connect exception signal to show exception message from running thread
        # This is needed as it's not possible to show a message box widget from the QThread directly
        self.thread.exception_signal.connect(self.thread_exception_handling)

    def validate_fan_config(self):
        """Validate fan configuration values, prevent incorrect/invalid values."""

        # Name of widget (spin box) calling function
        sender = self.sender().objectName()

        # Fan id is the last character in the name
        fan = sender[-1:]

        # Get current values from spin boxes
        min_speed_fan = getattr(self, "spinBoxMinSpeedFan" + str(fan)).value()
        start_increase_speed_fan = getattr(self, "spinBoxStartIncreaseSpeedFan" + str(fan)).value()
        intermediate_speed_fan = getattr(self, "spinBoxIntermediateSpeedFan" + str(fan)).value()
        max_speed_fan = getattr(self, "spinBoxMaxSpeedFan" + str(fan)).value()
        intermediate_temp_fan = getattr(self, "spinBoxIntermediateTempFan" + str(fan)).value()
        max_temp_fan = getattr(self, "spinBoxMaxTempFan" + str(fan)).value()

        # Logic for preventing incorrect/invalid values
        if sender.startswith("spinBoxMinSpeedFan"):
            if min_speed_fan >= intermediate_speed_fan:
                getattr(self, sender).setValue(intermediate_speed_fan - 1)

        elif sender.startswith("spinBoxStartIncreaseSpeedFan"):
           if start_increase_speed_fan >= intermediate_temp_fan:
               getattr(self, sender).setValue(intermediate_temp_fan - 1)

        elif sender.startswith("spinBoxIntermediateSpeedFan"):
            if intermediate_speed_fan >= max_speed_fan:
                getattr(self, sender).setValue(max_speed_fan - 1)
            if intermediate_speed_fan <= min_speed_fan:
                getattr(self, sender).setValue(min_speed_fan + 1)

        elif sender.startswith("spinBoxMaxSpeedFan"):
           if max_speed_fan <= intermediate_speed_fan:
               getattr(self, sender).setValue(intermediate_speed_fan + 1)

        elif sender.startswith("spinBoxIntermediateTempFan"):
            if intermediate_temp_fan >= max_temp_fan:
                getattr(self, sender).setValue(max_temp_fan - 1)
            if intermediate_temp_fan <= start_increase_speed_fan:
                getattr(self, sender).setValue(start_increase_speed_fan + 1)

        elif sender.startswith("spinBoxMaxTempFan"):
            if max_temp_fan <= intermediate_temp_fan:
                getattr(self, sender).setValue(intermediate_temp_fan + 1)

    def setup_ui_design(self):
        """Define UI parameters that cannot be configured in QT Creator directly."""

        # "OpenHardwareMonitor tree widget" configuration
        self.treeWidgetHWMonData.setHeaderLabels(["Node", "ID", "Temp (at init)"])
        self.treeWidgetHWMonData.expandAll()
        self.treeWidgetHWMonData.setSortingEnabled(False)
        self.treeWidgetHWMonData.sortByColumn(0, 0)
        self.treeWidgetHWMonData.setColumnWidth(0, 200)
        self.treeWidgetHWMonData.setColumnWidth(1, 100)
        self.treeWidgetHWMonData.setColumnWidth(2, 50)
        # treeWidget.setColumnHidden(1, True)
        self.treeWidgetHWMonData.setSelectionMode(QtWidgets.QAbstractItemView.MultiSelection)


        # "Selected CPU sensors" tree widget configuration
        self.treeWidgetSelectedCPUSensors.setHeaderLabels(["Node", "ID"])
        self.treeWidgetSelectedCPUSensors.setColumnWidth(0, 150)
        self.treeWidgetSelectedCPUSensors.setColumnWidth(1, 50)
        self.treeWidgetSelectedCPUSensors.setSelectionMode(QtWidgets.QAbstractItemView.MultiSelection)

        # "Selected GPU sensors" tree widget configuration
        self.treeWidgetSelectedGPUSensors.setHeaderLabels(["Node", "ID"])
        self.treeWidgetSelectedGPUSensors.setColumnWidth(0, 150)
        self.treeWidgetSelectedGPUSensors.setColumnWidth(1, 50)
        self.treeWidgetSelectedGPUSensors.setSelectionMode(QtWidgets.QAbstractItemView.MultiSelection)

        # "Simulate temperatures" group box settings
        self.checkBoxSimulateTemp.setChecked(False)
        self.horizontalSliderCPUTemp.setEnabled(False)
        self.horizontalSliderGPUTemp.setEnabled(False)

        # If automatic mode is enabled, disable the horizontal sliders
        if self.radioButtonAutomatic.isChecked():
            self.horizontalSliderFan1.setEnabled(False)
            self.horizontalSliderFan2.setEnabled(False)
            self.horizontalSliderFan3.setEnabled(False)
            self.horizontalSliderFan4.setEnabled(False)
            self.horizontalSliderFan5.setEnabled(False)
            self.horizontalSliderFan6.setEnabled(False)

    def init_communication(self):
        """Configure the serial device, serial port and polling interval before starting the polling thread.

        Called at:
        - Start of application
        - When the "Serial port" or "Polling interval" combo box is changed
        - When "Restart Communication" button is clicked
        """

        # If the polling thread is running, stop it to be able to update port/polling interval and reset fans
        if self.thread.isRunning():
            self.thread.stop()

        # Reset fan and temperature data (set rpm and voltage to "---" and temp to "0")
        self.reset_data()

        # If the serial port is open, close it
        with self.lock:
            if self.ser.isOpen():
                self.ser.close()

        # Check if a serial port is selected
        if self.comboBoxComPorts.currentText() != "<Select port>":
            # Setup serial device using selected serial port
            grid.setup_serial(self.ser, self.comboBoxComPorts.currentText(), self.lock)

            # Open serial device
            grid.open_serial(self.ser, self.lock)

            # If manual mode is selected, enable horizontal sliders (they are disabled if no serial port is selected)
            if self.radioButtonManual.isChecked():
                self.horizontalSliderFan1.setEnabled(True)
                self.horizontalSliderFan2.setEnabled(True)
                self.horizontalSliderFan3.setEnabled(True)
                self.horizontalSliderFan4.setEnabled(True)
                self.horizontalSliderFan5.setEnabled(True)
                self.horizontalSliderFan6.setEnabled(True)

            # Enable other UI elements
            self.radioButtonManual.setEnabled(True)
            self.radioButtonAutomatic.setEnabled(True)
            self.checkBoxSimulateTemp.setEnabled(True)
            self.horizontalSliderCPUTemp.setEnabled(True)
            self.horizontalSliderGPUTemp.setEnabled(True)

            # Initialize the Grid+ V2 device
            if grid.initialize_grid(self.ser, self.lock):
                # Set the initial fan speeds based on UI values
                self.initialize_fans()

                # Update the polling interval (ms) based on UI value
                self.thread.update_polling_interval(new_polling_interval=int(self.comboBoxPolling.currentText()))

                # Update temperature calculation (Maximum or Average) based on UI settings on "Sensor Config" tab
                self.thread.set_temp_calc(cpu_calc="Max" if self.radioButtonCPUMax.isChecked() else "Avg",
                                          gpu_calc="Max" if self.radioButtonGPUMax.isChecked() else "Avg")

                # Start the polling thread
                self.thread.start()

                # Update status in UI
                self.labelPollingStatus.setText('<b><font color="green">Running</font></b>')

            # Handle unsuccessful initialization
            else:
                # As there is a communication problem, reset the "serial port" combo box
                index = self.comboBoxComPorts.findText("<Select port>")
                self.comboBoxComPorts.setCurrentIndex(index)

                # Update status in UI
                self.labelPollingStatus.setText('<b><font color="red">Stopped</font></b>')

        # If no serial port is selected, disable UI elements
        else:
            self.horizontalSliderFan1.setEnabled(False)
            self.horizontalSliderFan2.setEnabled(False)
            self.horizontalSliderFan3.setEnabled(False)
            self.horizontalSliderFan4.setEnabled(False)
            self.horizontalSliderFan5.setEnabled(False)
            self.horizontalSliderFan6.setEnabled(False)
            self.radioButtonManual.setEnabled(False)
            self.radioButtonAutomatic.setEnabled(False)
            self.checkBoxSimulateTemp.setEnabled(False)
            self.horizontalSliderCPUTemp.setEnabled(False)
            self.horizontalSliderGPUTemp.setEnabled(False)
            self.horizontalSliderCPUTemp.setValue(0)
            self.horizontalSliderGPUTemp.setValue(0)

    def reset_data(self):
        """Reset fan rpm and voltage to "---" and activate the red status icon.
        Reset CPU and GPU temperature to "0"."""

        # Reset fan rpm
        self.labelRPMFan1.setText('<b><font color="red">---</font></b>')
        self.labelRPMFan2.setText('<b><font color="red">---</font></b>')
        self.labelRPMFan3.setText('<b><font color="red">---</font></b>')
        self.labelRPMFan4.setText('<b><font color="red">---</font></b>')
        self.labelRPMFan5.setText('<b><font color="red">---</font></b>')
        self.labelRPMFan6.setText('<b><font color="red">---</font></b>')

        # Reset fan voltage
        self.labelVFan1.setText('<b><font color="red">---</font></b>')
        self.labelVFan2.setText('<b><font color="red">---</font></b>')
        self.labelVFan3.setText('<b><font color="red">---</font></b>')
        self.labelVFan4.setText('<b><font color="red">---</font></b>')
        self.labelVFan5.setText('<b><font color="red">---</font></b>')
        self.labelVFan6.setText('<b><font color="red">---</font></b>')

        # Reset temperatures
        self.lcdNumberCurrentCPU.display(0)
        self.lcdNumberCurrentGPU.display(0)

        # Update status in UI
        self.labelPollingStatus.setText('<b><font color="red">Stopped</font></b>')
        self.labelHWMonStatus.setText('<b><font color="red">---</font></b>')

    def initialize_fans(self):
        """Initialize fans to the initial slider values."""

        grid.set_fan(ser=self.ser, fan=1, voltage=grid.calculate_voltage(self.lcdNumberFan1.value()), lock=self.lock)
        grid.set_fan(ser=self.ser, fan=2, voltage=grid.calculate_voltage(self.lcdNumberFan2.value()), lock=self.lock)
        grid.set_fan(ser=self.ser, fan=3, voltage=grid.calculate_voltage(self.lcdNumberFan3.value()), lock=self.lock)
        grid.set_fan(ser=self.ser, fan=4, voltage=grid.calculate_voltage(self.lcdNumberFan4.value()), lock=self.lock)
        grid.set_fan(ser=self.ser, fan=5, voltage=grid.calculate_voltage(self.lcdNumberFan5.value()), lock=self.lock)
        grid.set_fan(ser=self.ser, fan=6, voltage=grid.calculate_voltage(self.lcdNumberFan6.value()), lock=self.lock)

    def disable_enable_sliders(self):
        """Disables the horizontal sliders if "Automatic" mode is selected.
        When changing from automatic to manual mode, restore manual values."""

        # If "Automatic" radio button was clicked (i.e. it's "Checked")
        if self.radioButtonAutomatic.isChecked():
            # Save current manual values
            self.manual_value_fan1 = self.horizontalSliderFan1.value()
            self.manual_value_fan2 = self.horizontalSliderFan2.value()
            self.manual_value_fan3 = self.horizontalSliderFan3.value()
            self.manual_value_fan4 = self.horizontalSliderFan4.value()
            self.manual_value_fan5 = self.horizontalSliderFan5.value()
            self.manual_value_fan6 = self.horizontalSliderFan6.value()

            # Disable sliders
            self.horizontalSliderFan1.setEnabled(False)
            self.horizontalSliderFan2.setEnabled(False)
            self.horizontalSliderFan3.setEnabled(False)
            self.horizontalSliderFan4.setEnabled(False)
            self.horizontalSliderFan5.setEnabled(False)
            self.horizontalSliderFan6.setEnabled(False)

        # If "Manual" radio button was clicked
        else:
            # Restore saved manual values
            self.horizontalSliderFan1.setValue(self.manual_value_fan1)
            self.horizontalSliderFan2.setValue(self.manual_value_fan2)
            self.horizontalSliderFan3.setValue(self.manual_value_fan3)
            self.horizontalSliderFan4.setValue(self.manual_value_fan4)
            self.horizontalSliderFan5.setValue(self.manual_value_fan5)
            self.horizontalSliderFan6.setValue(self.manual_value_fan6)

            # Enable sliders
            self.horizontalSliderFan1.setEnabled(True)
            self.horizontalSliderFan2.setEnabled(True)
            self.horizontalSliderFan3.setEnabled(True)
            self.horizontalSliderFan4.setEnabled(True)
            self.horizontalSliderFan5.setEnabled(True)
            self.horizontalSliderFan6.setEnabled(True)

    def update_fan_speed(self):
        """Update fan speed based on CPU and GPU temperatures."""

        # If automatic mode is selected
        if self.radioButtonAutomatic.isChecked():
            # For each fan (1 ... 6)
            for fan in range(1, 7):
                # Linear equation calculation
                # y = k*x + m
                # k = (y2 - y1) / (x2 - x1)

                # First equation (a):
                # From "Start increase speed at" to "Intermediate fan speed at" (temperature on x-axis)

                # Temperatures (x-axis)
                x1_a = int(getattr(self, "spinBoxStartIncreaseSpeedFan" + str(fan)).value())
                x2_a = int(getattr(self, "spinBoxIntermediateTempFan" + str(fan)).value())

                # Speed in percent (y-axis)
                y1_a = int(getattr(self, "spinBoxMinSpeedFan" + str(fan)).value())
                y2_a = int(getattr(self, "spinBoxIntermediateSpeedFan" + str(fan)).value())

                # Calculate "k" and "m"
                k_a = (y2_a - y1_a) / (x2_a - x1_a)
                m_a = y1_a - k_a * x1_a

                # Second equation (b)
                # From "Intermediate fan speed at" to "Maximum fan speed at" (temperature on x-axis)

                # Temperatures (x-axis)
                x1_b = int(getattr(self, "spinBoxIntermediateTempFan" + str(fan)).value())
                x2_b = int(getattr(self, "spinBoxMaxTempFan" + str(fan)).value())

                # Speed in percent (y-axis)
                y1_b = int(getattr(self, "spinBoxIntermediateSpeedFan" + str(fan)).value())
                y2_b = int(getattr(self, "spinBoxMaxSpeedFan" + str(fan)).value())

                # Calculate "k" and "m"
                k_b = (y2_b - y1_b) / (x2_b - x1_b)
                m_b = y1_b - k_b * x1_b


                min_temperature = int(getattr(self, "spinBoxStartIncreaseSpeedFan" + str(fan)).value())

                intermediate_temperature = int(getattr(self, "spinBoxIntermediateTempFan" + str(fan)).value())

                max_temperature = int(getattr(self, "spinBoxMaxTempFan" + str(fan)).value())

                # If "Use CPU temperature" is selected, use current CPU temperature (from LCD widget in UI)
                if getattr(self, "radioButtonCPUFan" + str(fan)).isChecked():
                    current_temperature = self.lcdNumberCurrentCPU.value()

                # Else, use current GPU temperature (from LCD widget i UI)
                else:
                    current_temperature = self.lcdNumberCurrentGPU.value()

                if current_temperature <= min_temperature:
                    # Set fan to minimum fan speed (constant value)
                    fan_speed = int(getattr(self, "spinBoxMinSpeedFan" + str(fan)).value())

                elif current_temperature <= intermediate_temperature:
                    # Calculate temperature according to first linear equation
                    fan_speed = k_a * current_temperature + m_a

                elif current_temperature <= max_temperature:
                    # Calculate temperature according to second linear equation
                    fan_speed = k_b * current_temperature + m_b

                else:
                    # Set fan to maximum fan speed (constant value)
                    fan_speed = int(getattr(self, "spinBoxMaxSpeedFan" + str(fan)).value())

                # Update horizontal slider value
                getattr(self, "horizontalSliderFan" + str(fan)).setValue(round(fan_speed))

    def simulate_temperatures(self):
        """Simulate CPU and GPU temperatures, used for verifying the functionality of the fan control system."""

        # If "Simulate temperatures" checkbox is enabled
        if self.checkBoxSimulateTemp.isChecked():
            # Enable sliders
            self.horizontalSliderCPUTemp.setEnabled(True)
            self.horizontalSliderGPUTemp.setEnabled(True)

            # Update CPU and GPU values from current horizontal slider values
            self.lcdNumberCurrentCPU.display(self.horizontalSliderCPUTemp.value())
            self.lcdNumberCurrentGPU.display(self.horizontalSliderGPUTemp.value())

            # Disconnect temperature signals from polling thread
            self.thread.cpu_temp_signal.disconnect(self.lcdNumberCurrentCPU.display)
            self.thread.gpu_temp_signal.disconnect(self.lcdNumberCurrentGPU.display)

            # Connect the horizontal sliders to the "CPU" and "GPU" LCD widget
            self.horizontalSliderCPUTemp.valueChanged.connect(self.lcdNumberCurrentCPU.display)
            self.horizontalSliderGPUTemp.valueChanged.connect(self.lcdNumberCurrentGPU.display)

            # Update group box headers to indicate simulation mode
            self.groupBoxCurrentCPUTemp.setTitle("Sim. CPU temp")
            self.groupBoxCurrentGPUTemp.setTitle("Sim. GPU temp")

        # If "Simulate temperatures" checkbox is disabled, reset settings
        else:
            # Disable horizontal sliders
            self.horizontalSliderCPUTemp.setEnabled(False)
            self.horizontalSliderGPUTemp.setEnabled(False)

            # Reconnect signals from polling thread
            self.thread.cpu_temp_signal.connect(self.lcdNumberCurrentCPU.display)
            self.thread.gpu_temp_signal.connect(self.lcdNumberCurrentGPU.display)

            # Reset headers in UI
            self.groupBoxCurrentCPUTemp.setTitle("Current CPU temp")
            self.groupBoxCurrentGPUTemp.setTitle("Current GPU temp")

    def restart(self):
        """Update 'Selected CPU and GPU sensors' and restart application"""
        # TODO: Add apply button
        self.thread.update_sensors(self.get_cpu_sensor_ids(), self.get_gpu_sensor_ids())
        self.init_communication()

    def thread_exception_handling(self, msg):
        """Display an error message with details about the exception and reset the "serial port value" to <Select port>.
        Called when an exception occurs in the polling thread."""

        # Show error message
        helper.show_error(msg)

        # Reset the "serial port" combo box
        index = self.comboBoxComPorts.findText("<Select port>")
        self.comboBoxComPorts.setCurrentIndex(index)

    def add_cpu_sensors(self):
        """Add selected temperature sensor(s) to the "Selected CPU sensor(s)" three widget."""

        items = [item for item in self.treeWidgetHWMonData.selectedItems()]

        # The new items should have the tree widget itself as parent
        parent = self.treeWidgetSelectedCPUSensors

        for item in items:
            sensor_item = QtWidgets.QTreeWidgetItem(parent)
            sensor_item.setText(0, item.text(0))
            sensor_item.setText(1, item.text(1))
            sensor_item.setForeground(0, QtGui.QBrush(QtCore.Qt.blue))  # Text color blue

        # Deselect all items in the HWMon tree widget after they have been added
        self.treeWidgetHWMonData.clearSelection()

    def add_gpu_sensors(self):
        """Add selected temperature sensor(s) to the "Selected GPU sensor(s)" three widget."""
        items = [item for item in self.treeWidgetHWMonData.selectedItems()]

        # The new items should have the tree widget itself as parent
        parent = self.treeWidgetSelectedGPUSensors

        for item in items:
            sensor_item = QtWidgets.QTreeWidgetItem(parent)
            sensor_item.setText(0, item.text(0))
            sensor_item.setText(1, item.text(1))
            sensor_item.setForeground(0, QtGui.QBrush(QtCore.Qt.blue))  # Text color blue

        # Deselect all items in the HWMon tree widget after they have been added
        self.treeWidgetHWMonData.clearSelection()

    def remove_cpu_sensors(self):
        """Remove selected CPU sensors."""

        root = self.treeWidgetSelectedCPUSensors.invisibleRootItem()
        for item in self.treeWidgetSelectedCPUSensors.selectedItems():
            root.removeChild(item)

    def remove_gpu_sensors(self):
        """Remove selected GPU sensors."""

        root = self.treeWidgetSelectedGPUSensors.invisibleRootItem()
        for item in self.treeWidgetSelectedGPUSensors.selectedItems():
            root.removeChild(item)

    def get_cpu_sensor_ids(self):
        """Get id's for each sensor in the "Selected CPU sensors" tree."""

        root = self.treeWidgetSelectedCPUSensors.invisibleRootItem()
        child_count = root.childCount()
        cpu_sensor_ids = []
        for i in range(child_count):
            item = root.child(i)
            cpu_sensor_ids.append(item.text(1))  # Second column is the id
        return cpu_sensor_ids

    def get_gpu_sensor_ids(self):
        """Get id's for each sensor in the "Selected GPU sensors" tree."""

        root = self.treeWidgetSelectedGPUSensors.invisibleRootItem()
        child_count = root.childCount()
        gpu_sensor_ids = []
        for i in range(child_count):
            item = root.child(i)
            gpu_sensor_ids.append(item.text(1))  # Second column is the id
        return gpu_sensor_ids

    def closeEvent(self, event):
        """Save UI settings and stops the running thread gracefully, then exit the application.
        Called when closing the application window.
        """

        # Stop the running thread
        if self.thread.isRunning():
            self.thread.stop()
            print("Thread stopped")

        # Save UI settings
        settings.save_settings(self.config, self)
        print("Settings saved")

        # Accept the closing event and close application
        event.accept()

    #leviathan
    def color_mode(self,arg):
        buttons = {
            self.krakenNormal: cooler.Cooler.COLOR_MODE_NORMAL,
            self.krakenAlternating: cooler.Cooler.COLOR_MODE_ALTERNATING,
            self.krakenBlinking: cooler.Cooler.COLOR_MODE_BLINKING,
            self.krakenOff: cooler.Cooler.COLOR_MODE_OFF
            }
        return buttons[arg]

    def krakenMainAddFunc(self):
        if self.krakenMainList.count() == 1:
            self.error("This cannot have more than one color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.krakenMainList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def krakenMainDeleteFunc(self):
        self.krakenMainList.takeItem(self.krakenMainList.currentRow())

    def krakenAlternateAddFunc(self):
        if self.krakenAlternateList.count() == 1:
            self.error("This cannot have more than one color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.krakenAlternateList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def krakenAlternateDeleteFunc(self):
        self.krakenAlternateList.takeItem(self.krakenAlternateList.currentRow())

    def krakenApplyFunc(self):
        buttons = [self.krakenNormal, self.krakenAlternating, self.krakenBlinking, self.krakenOff]
        speed = self.krakenSpeed.value()
        color1 = webcolors.hex_to_rgb('#' + self.getColors(self.krakenMainList)[0])
        color2 = webcolors.hex_to_rgb('#' + self.getColors(self.krakenAlternateList)[0])
        interval = self.krakenInterval.value()
        mode = cooler.Cooler.COLOR_MODE_NORMAL
        for i in buttons:
            if i.isChecked():
                mode = self.color_mode(i)
        print(speed, color1, color2, interval, mode, type(color1[0]))
        if self.cooler:
            self.error("Status: " + str(self.cooler.update()))
        else:
            self.error("No Kraken found!")

    def error(self, message):
        msg = QMessageBox()
        msg.setText(message)
        msg.setStandardButtons(QMessageBox.Ok)
        out = msg.exec_()

    def get_port(self):
        ports = []
        for port in list_ports.comports():
            if 'MCP2200' in port[1] or 'USB Serial Device' in port[1]:
                ports.append(port[0])
        if ports:
            return ports[0]
        else:
            return None

    def update(self):
        with urllib.request.urlopen('https://raw.githubusercontent.com/kusti8/OpenHWControl/master/version') as response:
            version_new = response.read().strip()
            if versiontuple(version_new.decode()) > versiontuple(VERSION):
                self.error("There is a new update available. Download it from https://github.com/kusti8/OpenHWControl")

    def getChannel(self):
        if self.channel1Check.isChecked() and self.channel2Check.isChecked():
            return 0
        elif self.channel1Check.isChecked():
            return 1
        elif self.channel2Check.isChecked():
            return 2
        else:
            return None

    def getColors(self, modeList):
        colors = []
        for i in range(modeList.count()):
            colors.append(find_between(modeList.item(i).text(), '#', ')').upper())
        if modeList.count() == 0:
            self.error("Must have at least one color")
            return ['FF0000']
        return colors

    ## Fixed
    def fixedAddFunc(self):
        if self.fixedList.count() == 1:
            self.error("Fixed cannot have more than one color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.fixedList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def fixedDeleteFunc(self):
        self.fixedList.takeItem(self.fixedList.currentRow())

    def fixedApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                print("Applying")
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    print(self.getColors(self.fixedList)[0], self.getChannel())
                    hue.fixed(ser, 0, self.getChannel(), self.getColors(self.fixedList)[0])
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## Breathing
    def breathingAddFunc(self):
        color = "#" + pick("Color").lower()
        actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
        if not actual:
            actual = closest
        self.breathingList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def breathingDeleteFunc(self):
        self.breathingList.takeItem(self.breathingList.currentRow())

    def breathingApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.breathingSpeed.value()
                    hue.breathing(ser, 0, self.getChannel(), self.getColors(self.breathingList), speed)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## Fading
    def fadingAddFunc(self):
        hex_color = pick("Color")
        if hex_color is None:
            return
        color = "#" + hex_color.lower()
        actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
        if not actual:
            actual = closest
        self.fadingList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def fadingDeleteFunc(self):
        self.fadingList.takeItem(self.fadingList.currentRow())

    def fadingApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.fadingSpeed.value()
                    hue.fading(ser, 0, self.getChannel(), self.getColors(self.fadingList), speed)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## Marquee
    def marqueeAddFunc(self):
        if self.marqueeList.count() == 1:
            self.error("Marquee cannot have more than one color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.marqueeList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def marqueeDeleteFunc(self):
        self.marqueeList.takeItem(self.marqueeList.currentRow())

    def marqueeApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    print(self.getChannel())
                    speed = self.marqueeSpeed.value()
                    size = self.marqueeSize.value()
                    direction = 0 if self.marqueeBackwards.isChecked() else 0
                    hue.marquee(ser, 0, self.getChannel(), self.getColors(self.marqueeList)[0], speed, size, direction)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## coverMarquee
    def coverMarqueeAddFunc(self):
        hex_color = pick("Color")
        if hex_color is None:
            return
        color = "#" + hex_color.lower()
        actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
        if not actual:
            actual = closest
        self.coverMarqueeList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def coverMarqueeDeleteFunc(self):
        self.coverMarqueeList.takeItem(self.coverMarqueeList.currentRow())

    def coverMarqueeApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.coverMarqueeSpeed.value()
                    direction = 0 if self.coverMarqueeBackwards.isChecked() else 0
                    hue.cover_marquee(ser, 0, self.getChannel(), self.getColors(self.coverMarqueeList), speed, direction)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## pulse
    def pulseAddFunc(self):
        color = "#" + pick("Color").lower()
        actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
        if not actual:
            actual = closest
        self.pulseList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def pulseDeleteFunc(self):
        self.pulseList.takeItem(self.pulseList.currentRow())

    def pulseApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.pulseSpeed.value()
                    hue.pulse(ser, 0, self.getChannel(), self.getColors(self.pulseList), speed)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## spectrum
    def spectrumApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.spectrumSpeed.value()
                    direction = 1 if self.spectrumBackwards.isChecked() else 0
                    hue.spectrum(ser, self.getChannel(), speed, direction)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## alternating
    def alternatingAddFunc(self):
        if self.alternatingList.count() == 2:
            self.error("Alternating cannot have more than two colors")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.alternatingList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def alternatingDeleteFunc(self):
        self.alternatingList.takeItem(self.alternatingList.currentRow())

    def alternatingApply(self):
        try:
            if self.alternatingList.count() != 2:
                self.error("Alternating must have two colors")
            else:
                with serial.Serial(self.portTxt.text(), 256000) as ser:
                    if self.getChannel() == None:
                        hue.power(ser, 0, "off")
                    else:
                        speed = self.alternatingSpeed.value()
                        size = self.alternatingSize.value()
                        direction = 1 if self.alternatingBackwards.isChecked() else 0
                        moving = self.alternatingMoving.isChecked()
                        hue.alternating(ser, 0, self.getChannel(), self.getColors(self.alternatingList), speed, size, moving, direction)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")
    ## candle
    def candleAddFunc(self):
        if self.candleList.count() == 1:
            self.error("Candle cannot have more than 1 color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.candleList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def candleDeleteFunc(self):
        self.candleList.takeItem(self.candleList.currentRow())

    def candleApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    hue.candlelight(ser, 0, self.getChannel(), self.getColors(self.candleList)[0])
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## wings
    def wingsAddFunc(self):
        if self.wingsList.count() == 1:
            self.error("Wings cannot have more than 1 color")
        else:
            hex_color = pick("Color")
            if hex_color is None:
                return
            color = "#" + hex_color.lower()
            actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
            if not actual:
                actual = closest
            self.wingsList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def wingsDeleteFunc(self):
        self.wingsList.takeItem(self.wingsList.currentRow())

    def wingsApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    speed = self.wingsSpeed.value()
                    hue.wings(ser, 0, self.getChannel(), self.getColors(self.wingsList)[0], speed)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## audio_level
    def audioLevelAddFunc(self):
        hex_color = pick("Color")
        if hex_color is None:
            return
        color = "#" + hex_color.lower()
        actual, closest = get_colour_name(webcolors.hex_to_rgb(color))
        if not actual:
            actual = closest
        self.audioLevelList.addItem(QListWidgetItem(actual + "(" + color + ")"))

    def audioLevelDeleteFunc(self):
        self.audioLevelList.takeItem(self.audioLevelList.currentRow())

    def audioLevelApply(self):
        if os.name() == 'nt':
            self.error("Audio mode not supported on Windows")
            return
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    tolerance = float(self.audioLevelTolerance.value())
                    smooth = int(self.audioLevelTolerance.value())
                    hue.audio_level(ser, 0, self.getChannel(), self.getColors(self.audioLevelList), tolerance, smooth)
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    ## profile
    def profileAddFunc(self):
        hue.profile_add(self.profileName.text())
        self.profileList.addItem(QListWidgetItem(self.profileName.text()))

    def profileDeleteFunc(self):
        hue.profile_rm(self.profileList.currentItem().text())
        self.audioLevelList.takeItem(self.profileList.currentRow())
        self.profileListFunc()

    def profileApply(self):
        try:
            with serial.Serial(self.portTxt.text(), 256000) as ser:
                if self.getChannel() == None:
                    hue.power(ser, 0, "off")
                else:
                    hue.profile_apply(ser, self.profileList.currentItem().text())
        except serial.serialutil.SerialException:
            self.error("Serial port is invalid. Try /dev/ttyACM0 for Linux or COM3 or COM4 for Windows")

    def profileListFunc(self):
        self.profileList.clear()
        if hue.profile_list():
            for p in hue.profile_list():
                self.profileList.addItem(QListWidgetItem(p))

    def applyFunc(self):
        devices = self.indexDevices[self.modeWidget.currentIndex()]
        if devices == self.presetModeWidget:
            self.indexApply[devices.currentIndex()]()
        elif devices == self.krakenApplyFunc:
            devices()

if __name__ == '__main__':
    main()
