# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/estebagel/clion-2019.1/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/estebagel/clion-2019.1/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default"

# Utility rule file for SlateViewer-Linux-DebugGame.

# Include the progress variables for this target.
include CMakeFiles/SlateViewer-Linux-DebugGame.dir/progress.make

CMakeFiles/SlateViewer-Linux-DebugGame:
	cd /home/estebagel/UE_4.20-unstoppable && bash /home/estebagel/UE_4.20-unstoppable/Engine/Build/BatchFiles/Linux/Build.sh SlateViewer Linux DebugGame -game -buildscw

SlateViewer-Linux-DebugGame: CMakeFiles/SlateViewer-Linux-DebugGame
SlateViewer-Linux-DebugGame: CMakeFiles/SlateViewer-Linux-DebugGame.dir/build.make

.PHONY : SlateViewer-Linux-DebugGame

# Rule to build all files generated by this target.
CMakeFiles/SlateViewer-Linux-DebugGame.dir/build: SlateViewer-Linux-DebugGame

.PHONY : CMakeFiles/SlateViewer-Linux-DebugGame.dir/build

CMakeFiles/SlateViewer-Linux-DebugGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SlateViewer-Linux-DebugGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SlateViewer-Linux-DebugGame.dir/clean

CMakeFiles/SlateViewer-Linux-DebugGame.dir/depend:
	cd "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default/CMakeFiles/SlateViewer-Linux-DebugGame.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/SlateViewer-Linux-DebugGame.dir/depend

