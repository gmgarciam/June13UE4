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

# Utility rule file for MayaLiveLinkPlugin2017.

# Include the progress variables for this target.
include CMakeFiles/MayaLiveLinkPlugin2017.dir/progress.make

CMakeFiles/MayaLiveLinkPlugin2017:
	cd /home/estebagel/UE_4.20-unstoppable && bash /home/estebagel/UE_4.20-unstoppable/Engine/Build/BatchFiles/Linux/Build.sh MayaLiveLinkPlugin2017 Linux Development -game -buildscw

MayaLiveLinkPlugin2017: CMakeFiles/MayaLiveLinkPlugin2017
MayaLiveLinkPlugin2017: CMakeFiles/MayaLiveLinkPlugin2017.dir/build.make

.PHONY : MayaLiveLinkPlugin2017

# Rule to build all files generated by this target.
CMakeFiles/MayaLiveLinkPlugin2017.dir/build: MayaLiveLinkPlugin2017

.PHONY : CMakeFiles/MayaLiveLinkPlugin2017.dir/build

CMakeFiles/MayaLiveLinkPlugin2017.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MayaLiveLinkPlugin2017.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MayaLiveLinkPlugin2017.dir/clean

CMakeFiles/MayaLiveLinkPlugin2017.dir/depend:
	cd "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-default/CMakeFiles/MayaLiveLinkPlugin2017.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/MayaLiveLinkPlugin2017.dir/depend

