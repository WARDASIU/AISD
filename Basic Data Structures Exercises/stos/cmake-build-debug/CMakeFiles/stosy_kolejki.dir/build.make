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
CMAKE_SOURCE_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/stosy_kolejki.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/stosy_kolejki.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/stosy_kolejki.dir/flags.make

CMakeFiles/stosy_kolejki.dir/Stos.cpp.o: CMakeFiles/stosy_kolejki.dir/flags.make
CMakeFiles/stosy_kolejki.dir/Stos.cpp.o: ../Stos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/stosy_kolejki.dir/Stos.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/stosy_kolejki.dir/Stos.cpp.o -c "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/Stos.cpp"

CMakeFiles/stosy_kolejki.dir/Stos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/stosy_kolejki.dir/Stos.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/Stos.cpp" > CMakeFiles/stosy_kolejki.dir/Stos.cpp.i

CMakeFiles/stosy_kolejki.dir/Stos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/stosy_kolejki.dir/Stos.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/Stos.cpp" -o CMakeFiles/stosy_kolejki.dir/Stos.cpp.s

# Object files for target stosy_kolejki
stosy_kolejki_OBJECTS = \
"CMakeFiles/stosy_kolejki.dir/Stos.cpp.o"

# External object files for target stosy_kolejki
stosy_kolejki_EXTERNAL_OBJECTS =

stosy_kolejki.exe: CMakeFiles/stosy_kolejki.dir/Stos.cpp.o
stosy_kolejki.exe: CMakeFiles/stosy_kolejki.dir/build.make
stosy_kolejki.exe: CMakeFiles/stosy_kolejki.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable stosy_kolejki.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/stosy_kolejki.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/stosy_kolejki.dir/build: stosy_kolejki.exe

.PHONY : CMakeFiles/stosy_kolejki.dir/build

CMakeFiles/stosy_kolejki.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/stosy_kolejki.dir/cmake_clean.cmake
.PHONY : CMakeFiles/stosy_kolejki.dir/clean

CMakeFiles/stosy_kolejki.dir/depend:
	cd "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/stosy-kolejki/stos/cmake-build-debug/CMakeFiles/stosy_kolejki.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/stosy_kolejki.dir/depend

