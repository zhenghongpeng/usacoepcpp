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
CMAKE_SOURCE_DIR = /Users/rc/CLionProject/Elephant

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rc/CLionProject/Elephant/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Elephant.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Elephant.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Elephant.dir/flags.make

CMakeFiles/Elephant.dir/main.cpp.o: CMakeFiles/Elephant.dir/flags.make
CMakeFiles/Elephant.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rc/CLionProject/Elephant/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Elephant.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Elephant.dir/main.cpp.o -c /Users/rc/CLionProject/Elephant/main.cpp

CMakeFiles/Elephant.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Elephant.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rc/CLionProject/Elephant/main.cpp > CMakeFiles/Elephant.dir/main.cpp.i

CMakeFiles/Elephant.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Elephant.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rc/CLionProject/Elephant/main.cpp -o CMakeFiles/Elephant.dir/main.cpp.s

# Object files for target Elephant
Elephant_OBJECTS = \
"CMakeFiles/Elephant.dir/main.cpp.o"

# External object files for target Elephant
Elephant_EXTERNAL_OBJECTS =

Elephant: CMakeFiles/Elephant.dir/main.cpp.o
Elephant: CMakeFiles/Elephant.dir/build.make
Elephant: CMakeFiles/Elephant.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rc/CLionProject/Elephant/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Elephant"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Elephant.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Elephant.dir/build: Elephant

.PHONY : CMakeFiles/Elephant.dir/build

CMakeFiles/Elephant.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Elephant.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Elephant.dir/clean

CMakeFiles/Elephant.dir/depend:
	cd /Users/rc/CLionProject/Elephant/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rc/CLionProject/Elephant /Users/rc/CLionProject/Elephant /Users/rc/CLionProject/Elephant/cmake-build-debug /Users/rc/CLionProject/Elephant/cmake-build-debug /Users/rc/CLionProject/Elephant/cmake-build-debug/CMakeFiles/Elephant.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Elephant.dir/depend
