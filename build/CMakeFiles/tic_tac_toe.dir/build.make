# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1005/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1005/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/kubus/Pulpit/tic_tac_toe_sfml

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/kubus/Pulpit/tic_tac_toe_sfml/build

# Include any dependencies generated for this target.
include CMakeFiles/tic_tac_toe.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tic_tac_toe.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tic_tac_toe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tic_tac_toe.dir/flags.make

CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o: ../src/circle.cpp
CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o: CMakeFiles/tic_tac_toe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o -MF CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o.d -o CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o -c /home/kubus/Pulpit/tic_tac_toe_sfml/src/circle.cpp

CMakeFiles/tic_tac_toe.dir/src/circle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/circle.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/tic_tac_toe_sfml/src/circle.cpp > CMakeFiles/tic_tac_toe.dir/src/circle.cpp.i

CMakeFiles/tic_tac_toe.dir/src/circle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/circle.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/tic_tac_toe_sfml/src/circle.cpp -o CMakeFiles/tic_tac_toe.dir/src/circle.cpp.s

CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o: ../src/cross.cpp
CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o: CMakeFiles/tic_tac_toe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o -MF CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o.d -o CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o -c /home/kubus/Pulpit/tic_tac_toe_sfml/src/cross.cpp

CMakeFiles/tic_tac_toe.dir/src/cross.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/cross.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/tic_tac_toe_sfml/src/cross.cpp > CMakeFiles/tic_tac_toe.dir/src/cross.cpp.i

CMakeFiles/tic_tac_toe.dir/src/cross.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/cross.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/tic_tac_toe_sfml/src/cross.cpp -o CMakeFiles/tic_tac_toe.dir/src/cross.cpp.s

CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o: ../src/gameboard.cpp
CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o: CMakeFiles/tic_tac_toe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o -MF CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o.d -o CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o -c /home/kubus/Pulpit/tic_tac_toe_sfml/src/gameboard.cpp

CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/tic_tac_toe_sfml/src/gameboard.cpp > CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.i

CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/tic_tac_toe_sfml/src/gameboard.cpp -o CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.s

CMakeFiles/tic_tac_toe.dir/src/main.cpp.o: CMakeFiles/tic_tac_toe.dir/flags.make
CMakeFiles/tic_tac_toe.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/tic_tac_toe.dir/src/main.cpp.o: CMakeFiles/tic_tac_toe.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/tic_tac_toe.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tic_tac_toe.dir/src/main.cpp.o -MF CMakeFiles/tic_tac_toe.dir/src/main.cpp.o.d -o CMakeFiles/tic_tac_toe.dir/src/main.cpp.o -c /home/kubus/Pulpit/tic_tac_toe_sfml/src/main.cpp

CMakeFiles/tic_tac_toe.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tic_tac_toe.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/kubus/Pulpit/tic_tac_toe_sfml/src/main.cpp > CMakeFiles/tic_tac_toe.dir/src/main.cpp.i

CMakeFiles/tic_tac_toe.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tic_tac_toe.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/kubus/Pulpit/tic_tac_toe_sfml/src/main.cpp -o CMakeFiles/tic_tac_toe.dir/src/main.cpp.s

# Object files for target tic_tac_toe
tic_tac_toe_OBJECTS = \
"CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o" \
"CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o" \
"CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o" \
"CMakeFiles/tic_tac_toe.dir/src/main.cpp.o"

# External object files for target tic_tac_toe
tic_tac_toe_EXTERNAL_OBJECTS =

tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/circle.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/cross.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/gameboard.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/src/main.cpp.o
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/build.make
tic_tac_toe: CMakeFiles/tic_tac_toe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable tic_tac_toe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tic_tac_toe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tic_tac_toe.dir/build: tic_tac_toe
.PHONY : CMakeFiles/tic_tac_toe.dir/build

CMakeFiles/tic_tac_toe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tic_tac_toe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tic_tac_toe.dir/clean

CMakeFiles/tic_tac_toe.dir/depend:
	cd /home/kubus/Pulpit/tic_tac_toe_sfml/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/kubus/Pulpit/tic_tac_toe_sfml /home/kubus/Pulpit/tic_tac_toe_sfml /home/kubus/Pulpit/tic_tac_toe_sfml/build /home/kubus/Pulpit/tic_tac_toe_sfml/build /home/kubus/Pulpit/tic_tac_toe_sfml/build/CMakeFiles/tic_tac_toe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tic_tac_toe.dir/depend

