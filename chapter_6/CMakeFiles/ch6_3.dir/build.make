# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/chileboy/c_programming/chapter_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/chileboy/c_programming/chapter_6

# Include any dependencies generated for this target.
include CMakeFiles/ch6_3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ch6_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ch6_3.dir/flags.make

CMakeFiles/ch6_3.dir/ch6_3.c.o: CMakeFiles/ch6_3.dir/flags.make
CMakeFiles/ch6_3.dir/ch6_3.c.o: ch6_3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/chileboy/c_programming/chapter_6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ch6_3.dir/ch6_3.c.o"
	clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ch6_3.dir/ch6_3.c.o   -c /home/chileboy/c_programming/chapter_6/ch6_3.c

CMakeFiles/ch6_3.dir/ch6_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ch6_3.dir/ch6_3.c.i"
	clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/chileboy/c_programming/chapter_6/ch6_3.c > CMakeFiles/ch6_3.dir/ch6_3.c.i

CMakeFiles/ch6_3.dir/ch6_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ch6_3.dir/ch6_3.c.s"
	clang $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/chileboy/c_programming/chapter_6/ch6_3.c -o CMakeFiles/ch6_3.dir/ch6_3.c.s

# Object files for target ch6_3
ch6_3_OBJECTS = \
"CMakeFiles/ch6_3.dir/ch6_3.c.o"

# External object files for target ch6_3
ch6_3_EXTERNAL_OBJECTS =

ch6_3: CMakeFiles/ch6_3.dir/ch6_3.c.o
ch6_3: CMakeFiles/ch6_3.dir/build.make
ch6_3: CMakeFiles/ch6_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/chileboy/c_programming/chapter_6/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ch6_3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ch6_3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ch6_3.dir/build: ch6_3

.PHONY : CMakeFiles/ch6_3.dir/build

CMakeFiles/ch6_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ch6_3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ch6_3.dir/clean

CMakeFiles/ch6_3.dir/depend:
	cd /home/chileboy/c_programming/chapter_6 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/chileboy/c_programming/chapter_6 /home/chileboy/c_programming/chapter_6 /home/chileboy/c_programming/chapter_6 /home/chileboy/c_programming/chapter_6 /home/chileboy/c_programming/chapter_6/CMakeFiles/ch6_3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ch6_3.dir/depend
