import sys
from cx_Freeze import setup, Executable

build_exe_options = {"include_files": ["libusb-1.0.dll", "OpenHWMonitor/Aga.Controls.dll", "OpenHWMonitor/OpenHardwareMonitor.config", "OpenHWMonitor/OpenHardwareMonitor.exe", "OpenHWMonitor/OpenHardwareMonitor.exe.config", "OpenHWMonitor/OpenHardwareMonitorLib.dll", "OpenHWMonitor/OxyPlot.dll", "OpenHWMonitor/OxyPlot.WindowsForms.dll", "OpenHWMonitor/License.html"]}

setup(name='openhwcontrol',
      version='1.0.0',
      description='A cross platform open source tool to control NZXT components easily through software',
      classifiers=[
        'Development Status :: 5 - Production/Stable',
        'License :: OSI Approved :: GNU General Public License v3 or later (GPLv3+)',
        'Programming Language :: Python :: 3 :: Only'
      ],
      url='http://github.com/kusti8/openhwcontrol',
      author='Gustav Hansen',
      author_email='kusti8@gmail.com',
      license='GPL3',
      packages=['openhwcontrol'],
      executables = [Executable("openhwcontrol/ui.py", base = "Win32GUI", shortcutName="OpenHWControl")],
      install_requires=[
          'hue_plus',
          'pyusb'
      ],
      keywords = 'nzxt hue hue-plus hue_plus hue+ openhwcontrol kraken',
      include_package_data=True,
      zip_safe=False,
      options={'build_exe': build_exe_options})
