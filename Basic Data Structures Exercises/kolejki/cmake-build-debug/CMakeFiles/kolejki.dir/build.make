# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/Admin/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Admin/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/kolejki.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/kolejki.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kolejki.dir/flags.make

CMakeFiles/kolejki.dir/kolejki.cpp.o: CMakeFiles/kolejki.dir/flags.make
CMakeFiles/kolejki.dir/kolejki.cpp.o: ../kolejki.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kolejki.dir/kolejki.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/kolejki.dir/kolejki.cpp.o -c "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/kolejki.cpp"

CMakeFiles/kolejki.dir/kolejki.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kolejki.dir/kolejki.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/kolejki.cpp" > CMakeFiles/kolejki.dir/kolejki.cpp.i

CMakeFiles/kolejki.dir/kolejki.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kolejki.dir/kolejki.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/kolejki.cpp" -o CMakeFiles/kolejki.dir/kolejki.cpp.s

# Object files for target kolejki
kolejki_OBJECTS = \
"CMakeFiles/kolejki.dir/kolejki.cpp.o"

# External object files for target kolejki
kolejki_EXTERNAL_OBJECTS =

kolejki.exe: CMakeFiles/kolejki.dir/kolejki.cpp.o
kolejki.exe: CMakeFiles/kolejki.dir/build.make
kolejki.exe: CMakeFiles/kolejki.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kolejki.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/kolejki.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kolejki.dir/build: kolejki.exe

.PHONY : CMakeFiles/kolejki.dir/build

CMakeFiles/kolejki.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/kolejki.dir/cmake_clean.cmake
.PHONY : CMakeFiles/kolejki.dir/clean

CMakeFiles/kolejki.dir/depend:
	cd "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/kolejki/cmake-build-debug/CMakeFiles/kolejki.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kolejki.dir/depend

