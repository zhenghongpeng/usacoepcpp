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
CMAKE_SOURCE_DIR = /Users/rc/CLionProject/SoldierAndBananas

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SoldierAndBananas.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SoldierAndBananas.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SoldierAndBananas.dir/flags.make

CMakeFiles/SoldierAndBananas.dir/main.cpp.o: CMakeFiles/SoldierAndBananas.dir/flags.make
CMakeFiles/SoldierAndBananas.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SoldierAndBananas.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SoldierAndBananas.dir/main.cpp.o -c /Users/rc/CLionProject/SoldierAndBananas/main.cpp

CMakeFiles/SoldierAndBananas.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SoldierAndBananas.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/rc/CLionProject/SoldierAndBananas/main.cpp > CMakeFiles/SoldierAndBananas.dir/main.cpp.i

CMakeFiles/SoldierAndBananas.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SoldierAndBananas.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/rc/CLionProject/SoldierAndBananas/main.cpp -o CMakeFiles/SoldierAndBananas.dir/main.cpp.s

# Object files for target SoldierAndBananas
SoldierAndBananas_OBJECTS = \
"CMakeFiles/SoldierAndBananas.dir/main.cpp.o"

# External object files for target SoldierAndBananas
SoldierAndBananas_EXTERNAL_OBJECTS =

SoldierAndBananas: CMakeFiles/SoldierAndBananas.dir/main.cpp.o
SoldierAndBananas: CMakeFiles/SoldierAndBananas.dir/build.make
SoldierAndBananas: CMakeFiles/SoldierAndBananas.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SoldierAndBananas"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SoldierAndBananas.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SoldierAndBananas.dir/build: SoldierAndBananas

.PHONY : CMakeFiles/SoldierAndBananas.dir/build

CMakeFiles/SoldierAndBananas.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SoldierAndBananas.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SoldierAndBananas.dir/clean

CMakeFiles/SoldierAndBananas.dir/depend:
	cd /Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/rc/CLionProject/SoldierAndBananas /Users/rc/CLionProject/SoldierAndBananas /Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug /Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug /Users/rc/CLionProject/SoldierAndBananas/cmake-build-debug/CMakeFiles/SoldierAndBananas.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SoldierAndBananas.dir/depend
