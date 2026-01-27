# README libIEC61850

This file is part of the documentation of **libIEC61850**. More documentation can be found online at http://libiec61850.com.

The API documentation can be found here:
* C API: https://support.mz-automation.de/doc/libiec61850/c/latest/
* .NET API: https://support.mz-automation.de/doc/libiec61850/net/latest/

Also consider to review the examples to understand how to use the library.

## Overview

libiec61850 is an open-source (GPLv3) implementation of an IEC 61850 client and server library implementing the protocols MMS, GOOSE and SV. It is implemented in C (according to the C99 standard) to provide maximum portability. It can be used to implement IEC 61850 compliant client and server applications on embedded systems and PCs running Linux, Windows, and MacOS. Included is a set of simple example applications that can be used as a starting point to implement own IEC 61850 compliant devices or to communicate with IEC 61850 devices. The library has been successfully used in many commercial software products and devices.

For commercial projects licenses and support is provided by MZ Automation GmbH. Please contact info@mz-automation.de for more details on licensing options.


### Build on Linux

You have to install the build tools and cmake (e.g. the packages "build-essental" and "cmake" on Ubuntu 20.04)

Execute the following commands:

`mkdir build`

`cd build`

`cmake ..`

`make`

Optionally execute the following stop to install the library and header files in system directories:

`sudo make install`

## Using sqlite3 for data base

`sudo apt update`

`sudo apt install libsqlite3-dev`

### Build on Windows with Visual Studio

With the help of the cmake build script it is possible to create platform independent project descriptions and let cmake create specific project or build files for other tools like Make or Visual Studio.

If you have cmake installed fire up a command line (cmd.exe) and create a new subdirectory in the libiec61850 folder. Change to this subdirectory. Then you can invoke cmake. As an command line argument you have to supply a "generator" that is used by cmake to create the project file for the actual build tool (in our case Visual Studio 2015).

`cmake -G "Visual Studio 14 2015" ..`

will instruct cmake to create a "solution" for Visual Studio 2015. The resulting project files will be 32 bit. 

To build 64 bit libraries the "Win64" generator option has to be added.

`cmake -G "Visual Studio 14 2015 Win64" ..` 

Note: The ".." at the end of the command line tells cmake where to find the main build script file (called CMakeLists.txt). This should point to the folder libiec61850 which is in our case the parent directory (..).

Depending on the system you don't have to provide a generator to the cmake command.

To select some configuration options you can use ccmake or cmake-gui.

For newer version of Visual Studio you can use one of the following commands (for 64 bit builds):

For Visual Studio 2017:

  cmake -G "Visual Studio 15 2017 Win64" ..
  
For Visual Studio 2019 (new way to specify the x64 platform):

  cmake -G "Visual Studio 16 2019" .. -A x64