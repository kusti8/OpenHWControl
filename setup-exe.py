import sys
from cx_Freeze import setup, Executable

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
      executables = [Executable("ui.py", base = "Win32GUI")],
      install_requires=[
          'hue_plus',
      ],
      keywords = 'nzxt hue hue-plus hue_plus hue+ openhwcontrol kraken',
      include_package_data=True,
      zip_safe=False)
