# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/rc/CLionProject/NewYearsEve

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rc/CLionProject/NewYearsEve/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NewYearsEve.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/NewYearsEve.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NewYearsEve.dir/flags.make

CMakeFiles/NewYearsEve.dir/main.cpp.o: CMakeFiles/NewYearsEve.dir/flags.make
CMakeFiles/NewYearsEve.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rc/CLionProject/NewYearsEve/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NewYearsEve.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NewYearsEve.dir/main.cpp.o -c /Users/rc/CLionProject/NewYearsEve/main.cpp

CMakeFiles/NewYearsEve.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NewYearsEve.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rc/CLionProject/NewYearsEve/main.cpp > CMakeFiles/NewYearsEve.dir/main.cpp.i

CMakeFiles/NewYearsEve.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NewYearsEve.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rc/CLionProject/NewYearsEve/main.cpp -o CMakeFiles/NewYearsEve.dir/main.cpp.s

# Object files for target NewYearsEve
NewYearsEve_OBJECTS = \
"CMakeFiles/NewYearsEve.dir/main.cpp.o"

# External object files for target NewYearsEve
NewYearsEve_EXTERNAL_OBJECTS =

NewYearsEve: CMakeFiles/NewYearsEve.dir/main.cpp.o
NewYearsEve: CMakeFiles/NewYearsEve.dir/build.make
NewYearsEve: CMakeFiles/NewYearsEve.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rc/CLionProject/NewYearsEve/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NewYearsEve"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NewYearsEve.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NewYearsEve.dir/build: NewYearsEve

.PHONY : CMakeFiles/NewYearsEve.dir/build

CMakeFiles/NewYearsEve.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NewYearsEve.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NewYearsEve.dir/clean

CMakeFiles/NewYearsEve.dir/depend:
	cd /Users/rc/CLionProject/NewYearsEve/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rc/CLionProject/NewYearsEve /Users/rc/CLionProject/NewYearsEve /Users/rc/CLionProject/NewYearsEve/cmake-build-debug /Users/rc/CLionProject/NewYearsEve/cmake-build-debug /Users/rc/CLionProject/NewYearsEve/cmake-build-debug/CMakeFiles/NewYearsEve.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NewYearsEve.dir/depend
