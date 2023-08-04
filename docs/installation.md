# Installation and Setup
## Compilers
There are different kinds of compilers for c++.
It depends
- on the architecture of your CPU ( Intel x64, Intel x86, ARM64 )
- target operating system (Linux, Windows, Apple - iOS)
- C++ Version 

Here, you can see the compiler support by different Compiler Collections 
- GCC ==> Linux
- Apple Clang ==> Apple
- MSVC ==> Microsoft Visual C++ Redistributable
-  Intel C++, Nvidia nvcc... 

https://en.cppreference.com/w/cpp/compiler_support/17


### Windows 
Explanation taken from Visual Studio Code - C/C++ Extension Pack.


If you're doing C++ development for Windows, we recommend installing the Microsoft Visual C++ (MSVC) compiler toolset. 
To install MSVC, download Build Tools for Visual Studio 2019 from the Visual Studio Downloads page.

In the Visual Studio Installer, check the C++ build tools workload and select Install.

Note: You can use the C++ toolset from Visual Studio Build Tools along with Visual Studio Code to compile, build, and verify any C++ codebase as long as you also have a valid Visual Studio license (either Community, Pro, or Enterprise) that you are actively using to develop that C++ codebase.

Open the Developer Command Prompt for VS by typing 'developer' in the Windows Start menu.

Check your MSVC installation by typing cl into the Developer Command Prompt for VS. You should see a copyright message with the version and basic usage description.

Note: To use MSVC from the command line or VS Code, you must run from a Developer Command Prompt for VS. An ordinary shell such as PowerShell, Bash, or the Windows command prompt does not have the necessary path environment variables set.

#### Microsoft Visual C++ (MSVC)

#### GCC on Windows
If you're targeting Linux from Windows, check out Using C++ and Windows Subsystem for Linux (WSL) in VS Code. Or, you could install GCC on Windows with MinGW.

### Linux

#### GCC
normally automatically installed in Ubuntu.