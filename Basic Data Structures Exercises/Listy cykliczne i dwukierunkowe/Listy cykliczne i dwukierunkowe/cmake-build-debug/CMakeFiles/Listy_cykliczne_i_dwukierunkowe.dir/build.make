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
CMAKE_SOURCE_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/flags.make

CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o: CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/flags.make
CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o -c "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/main.cpp"

CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/main.cpp" > CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.i

CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/main.cpp" -o CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.s

# Object files for target Listy_cykliczne_i_dwukierunkowe
Listy_cykliczne_i_dwukierunkowe_OBJECTS = \
"CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o"

# External object files for target Listy_cykliczne_i_dwukierunkowe
Listy_cykliczne_i_dwukierunkowe_EXTERNAL_OBJECTS =

Listy_cykliczne_i_dwukierunkowe.exe: CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/main.cpp.o
Listy_cykliczne_i_dwukierunkowe.exe: CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/build.make
Listy_cykliczne_i_dwukierunkowe.exe: CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Listy_cykliczne_i_dwukierunkowe.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/build: Listy_cykliczne_i_dwukierunkowe.exe

.PHONY : CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/build

CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/clean

CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/depend:
	cd "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug" "/cygdrive/d/JetBeansProducts/MojeCwiczenia/Basic Data Structures Exercises/Listy cykliczne i dwukierunkowe/Listy cykliczne i dwukierunkowe/cmake-build-debug/CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Listy_cykliczne_i_dwukierunkowe.dir/depend

