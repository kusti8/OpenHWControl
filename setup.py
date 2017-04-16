from setuptools import setup

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
      entry_points={
        'gui_scripts': [
            'openhwcontrol = openhwcontrol.ui:main'
        ]
      },
      install_requires=[
          'hue_plus',
      ],
      keywords = 'nzxt hue hue-plus hue_plus hue+ openhwcontrol kraken',
      include_package_data=True,
      zip_safe=False)
