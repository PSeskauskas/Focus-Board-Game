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
CMAKE_COMMAND = /cygdrive/c/Users/patri/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/patri/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Assignment_2_19369726.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assignment_2_19369726.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assignment_2_19369726.dir/flags.make

CMakeFiles/Assignment_2_19369726.dir/main.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assignment_2_19369726.dir/main.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/main.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/main.c

CMakeFiles/Assignment_2_19369726.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/main.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/main.c > CMakeFiles/Assignment_2_19369726.dir/main.c.i

CMakeFiles/Assignment_2_19369726.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/main.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/main.c -o CMakeFiles/Assignment_2_19369726.dir/main.c.s

CMakeFiles/Assignment_2_19369726.dir/print_board.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/print_board.c.o: ../print_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Assignment_2_19369726.dir/print_board.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/print_board.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/print_board.c

CMakeFiles/Assignment_2_19369726.dir/print_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/print_board.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/print_board.c > CMakeFiles/Assignment_2_19369726.dir/print_board.c.i

CMakeFiles/Assignment_2_19369726.dir/print_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/print_board.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/print_board.c -o CMakeFiles/Assignment_2_19369726.dir/print_board.c.s

CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o: ../player_initialization.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_initialization.c

CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_initialization.c > CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.i

CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_initialization.c -o CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.s

CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o: ../player_movement.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_movement.c

CMakeFiles/Assignment_2_19369726.dir/player_movement.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/player_movement.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_movement.c > CMakeFiles/Assignment_2_19369726.dir/player_movement.c.i

CMakeFiles/Assignment_2_19369726.dir/player_movement.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/player_movement.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/player_movement.c -o CMakeFiles/Assignment_2_19369726.dir/player_movement.c.s

CMakeFiles/Assignment_2_19369726.dir/create_board.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/create_board.c.o: ../create_board.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Assignment_2_19369726.dir/create_board.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/create_board.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/create_board.c

CMakeFiles/Assignment_2_19369726.dir/create_board.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/create_board.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/create_board.c > CMakeFiles/Assignment_2_19369726.dir/create_board.c.i

CMakeFiles/Assignment_2_19369726.dir/create_board.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/create_board.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/create_board.c -o CMakeFiles/Assignment_2_19369726.dir/create_board.c.s

CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o: CMakeFiles/Assignment_2_19369726.dir/flags.make
CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o: ../move_stack.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o   -c /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/move_stack.c

CMakeFiles/Assignment_2_19369726.dir/move_stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assignment_2_19369726.dir/move_stack.c.i"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/move_stack.c > CMakeFiles/Assignment_2_19369726.dir/move_stack.c.i

CMakeFiles/Assignment_2_19369726.dir/move_stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assignment_2_19369726.dir/move_stack.c.s"
	C:/cygwin64/bin/gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/move_stack.c -o CMakeFiles/Assignment_2_19369726.dir/move_stack.c.s

# Object files for target Assignment_2_19369726
Assignment_2_19369726_OBJECTS = \
"CMakeFiles/Assignment_2_19369726.dir/main.c.o" \
"CMakeFiles/Assignment_2_19369726.dir/print_board.c.o" \
"CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o" \
"CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o" \
"CMakeFiles/Assignment_2_19369726.dir/create_board.c.o" \
"CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o"

# External object files for target Assignment_2_19369726
Assignment_2_19369726_EXTERNAL_OBJECTS =

Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/main.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/print_board.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/player_initialization.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/player_movement.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/create_board.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/move_stack.c.o
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/build.make
Assignment_2_19369726.exe: CMakeFiles/Assignment_2_19369726.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable Assignment_2_19369726.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Assignment_2_19369726.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assignment_2_19369726.dir/build: Assignment_2_19369726.exe

.PHONY : CMakeFiles/Assignment_2_19369726.dir/build

CMakeFiles/Assignment_2_19369726.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Assignment_2_19369726.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Assignment_2_19369726.dir/clean

CMakeFiles/Assignment_2_19369726.dir/depend:
	cd /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726 /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726 /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug /cygdrive/c/Users/patri/COMP10050/Assignment_2_19369726/cmake-build-debug/CMakeFiles/Assignment_2_19369726.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Assignment_2_19369726.dir/depend

