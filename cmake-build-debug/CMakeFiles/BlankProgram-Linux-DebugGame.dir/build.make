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
CMAKE_COMMAND = /snap/clion/61/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/61/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug"

# Utility rule file for BlankProgram-Linux-DebugGame.

# Include the progress variables for this target.
include CMakeFiles/BlankProgram-Linux-DebugGame.dir/progress.make

CMakeFiles/BlankProgram-Linux-DebugGame:
	cd /home/estebagel/UE_4.20-unstoppable && bash /home/estebagel/UE_4.20-unstoppable/Engine/Build/BatchFiles/Linux/Build.sh BlankProgram Linux DebugGame -game -buildscw

BlankProgram-Linux-DebugGame: CMakeFiles/BlankProgram-Linux-DebugGame
BlankProgram-Linux-DebugGame: CMakeFiles/BlankProgram-Linux-DebugGame.dir/build.make

.PHONY : BlankProgram-Linux-DebugGame

# Rule to build all files generated by this target.
CMakeFiles/BlankProgram-Linux-DebugGame.dir/build: BlankProgram-Linux-DebugGame

.PHONY : CMakeFiles/BlankProgram-Linux-DebugGame.dir/build

CMakeFiles/BlankProgram-Linux-DebugGame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BlankProgram-Linux-DebugGame.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BlankProgram-Linux-DebugGame.dir/clean

CMakeFiles/BlankProgram-Linux-DebugGame.dir/depend:
	cd "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug/CMakeFiles/BlankProgram-Linux-DebugGame.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/BlankProgram-Linux-DebugGame.dir/depend

