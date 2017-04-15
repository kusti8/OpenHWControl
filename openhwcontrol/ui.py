#!/usr/bin/env python3
VERSION="1.0.0"
import sys
import os
import types
import ctypes
import urllib.request
from PyQt5.QtCore import Qt
from PyQt5.QtGui import *
from PyQt5.QtWidgets import QGridLayout, QLabel, QLineEdit, QMessageBox, QColorDialog
from PyQt5.QtWidgets import QTextEdit, QWidget, QMainWindow, QApplication, QListWidgetItem

from . import gui
from hue_plus import hue
import serial
from serial.tools import list_ports

from hue_plus import webcolors

from leviathan.cooler import Cooler

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
            self.cooler = Cooler(0x2433, 0xb200)
        else:
            self.cooler = None

    #leviathan
    def color_mode(self,arg):
        buttons = {
            self.krakenNormal: Cooler.COLOR_MODE_NORMAL,
            self.krakenAlternating: Cooler.COLOR_MODE_ALTERNATING,
            self.krakenBlinking: Cooler.COLOR_MODE_BLINKING,
            self.krakenOff: Cooler.COLOR_MODE_OFF
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
        mode = Cooler.COLOR_MODE_NORMAL
        for i in buttons:
            if i.isChecked():
                mode = self.color_mode(i)
        self.error("Status: " + str(cooler.update()))

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
        with urllib.request.urlopen('https://raw.githubusercontent.com/kusti8/openhwcontrol/master/version') as response:
            version_new = response.read().strip()
            if versiontuple(version_new.decode()) > versiontuple(VERSION):
                self.error("There is a new update available. Download it from https://github.com/kusti8/openhwcontrol")

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
