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

# Utility rule file for UnrealPak-Linux-Shipping.

# Include the progress variables for this target.
include CMakeFiles/UnrealPak-Linux-Shipping.dir/progress.make

CMakeFiles/UnrealPak-Linux-Shipping:
	cd /home/estebagel/UE_4.20-unstoppable && bash /home/estebagel/UE_4.20-unstoppable/Engine/Build/BatchFiles/Linux/Build.sh UnrealPak Linux Shipping -game -buildscw

UnrealPak-Linux-Shipping: CMakeFiles/UnrealPak-Linux-Shipping
UnrealPak-Linux-Shipping: CMakeFiles/UnrealPak-Linux-Shipping.dir/build.make

.PHONY : UnrealPak-Linux-Shipping

# Rule to build all files generated by this target.
CMakeFiles/UnrealPak-Linux-Shipping.dir/build: UnrealPak-Linux-Shipping

.PHONY : CMakeFiles/UnrealPak-Linux-Shipping.dir/build

CMakeFiles/UnrealPak-Linux-Shipping.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/UnrealPak-Linux-Shipping.dir/cmake_clean.cmake
.PHONY : CMakeFiles/UnrealPak-Linux-Shipping.dir/clean

CMakeFiles/UnrealPak-Linux-Shipping.dir/depend:
	cd "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug" "/mnt/cafb6ca7-e023-440f-87de-8e3b343eb004/home_estebagel/Unreal Projects/June13UE4/cmake-build-debug/CMakeFiles/UnrealPak-Linux-Shipping.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/UnrealPak-Linux-Shipping.dir/depend

