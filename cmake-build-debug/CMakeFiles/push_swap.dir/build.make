# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/min/Desktop/c/42cursus/push_swap

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/push_swap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/push_swap.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/push_swap.c.o: ../push_swap.c
CMakeFiles/push_swap.dir/push_swap.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/push_swap.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/push_swap.c.o -MF CMakeFiles/push_swap.dir/push_swap.c.o.d -o CMakeFiles/push_swap.dir/push_swap.c.o -c /Users/min/Desktop/c/42cursus/push_swap/push_swap.c

CMakeFiles/push_swap.dir/push_swap.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/push_swap.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/push_swap.c > CMakeFiles/push_swap.dir/push_swap.c.i

CMakeFiles/push_swap.dir/push_swap.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/push_swap.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/push_swap.c -o CMakeFiles/push_swap.dir/push_swap.c.s

CMakeFiles/push_swap.dir/deque.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/deque.c.o: ../deque.c
CMakeFiles/push_swap.dir/deque.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/deque.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/deque.c.o -MF CMakeFiles/push_swap.dir/deque.c.o.d -o CMakeFiles/push_swap.dir/deque.c.o -c /Users/min/Desktop/c/42cursus/push_swap/deque.c

CMakeFiles/push_swap.dir/deque.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/deque.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/deque.c > CMakeFiles/push_swap.dir/deque.c.i

CMakeFiles/push_swap.dir/deque.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/deque.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/deque.c -o CMakeFiles/push_swap.dir/deque.c.s

CMakeFiles/push_swap.dir/utils.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/utils.c.o: ../utils.c
CMakeFiles/push_swap.dir/utils.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/utils.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/utils.c.o -MF CMakeFiles/push_swap.dir/utils.c.o.d -o CMakeFiles/push_swap.dir/utils.c.o -c /Users/min/Desktop/c/42cursus/push_swap/utils.c

CMakeFiles/push_swap.dir/utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/utils.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/utils.c > CMakeFiles/push_swap.dir/utils.c.i

CMakeFiles/push_swap.dir/utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/utils.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/utils.c -o CMakeFiles/push_swap.dir/utils.c.s

CMakeFiles/push_swap.dir/sort.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/sort.c.o: ../sort.c
CMakeFiles/push_swap.dir/sort.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/sort.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/sort.c.o -MF CMakeFiles/push_swap.dir/sort.c.o.d -o CMakeFiles/push_swap.dir/sort.c.o -c /Users/min/Desktop/c/42cursus/push_swap/sort.c

CMakeFiles/push_swap.dir/sort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/sort.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/sort.c > CMakeFiles/push_swap.dir/sort.c.i

CMakeFiles/push_swap.dir/sort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/sort.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/sort.c -o CMakeFiles/push_swap.dir/sort.c.s

CMakeFiles/push_swap.dir/spr.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/spr.c.o: ../spr.c
CMakeFiles/push_swap.dir/spr.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/spr.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/spr.c.o -MF CMakeFiles/push_swap.dir/spr.c.o.d -o CMakeFiles/push_swap.dir/spr.c.o -c /Users/min/Desktop/c/42cursus/push_swap/spr.c

CMakeFiles/push_swap.dir/spr.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/spr.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/spr.c > CMakeFiles/push_swap.dir/spr.c.i

CMakeFiles/push_swap.dir/spr.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/spr.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/spr.c -o CMakeFiles/push_swap.dir/spr.c.s

CMakeFiles/push_swap.dir/libft/ft_calloc.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_calloc.c.o: ../libft/ft_calloc.c
CMakeFiles/push_swap.dir/libft/ft_calloc.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/libft/ft_calloc.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_calloc.c.o -MF CMakeFiles/push_swap.dir/libft/ft_calloc.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_calloc.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_calloc.c

CMakeFiles/push_swap.dir/libft/ft_calloc.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_calloc.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_calloc.c > CMakeFiles/push_swap.dir/libft/ft_calloc.c.i

CMakeFiles/push_swap.dir/libft/ft_calloc.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_calloc.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_calloc.c -o CMakeFiles/push_swap.dir/libft/ft_calloc.c.s

CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o: ../libft/ft_strjoin.c
CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o -MF CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strjoin.c

CMakeFiles/push_swap.dir/libft/ft_strjoin.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_strjoin.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strjoin.c > CMakeFiles/push_swap.dir/libft/ft_strjoin.c.i

CMakeFiles/push_swap.dir/libft/ft_strjoin.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_strjoin.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strjoin.c -o CMakeFiles/push_swap.dir/libft/ft_strjoin.c.s

CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o: ../libft/ft_strlcpy.c
CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o -MF CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcpy.c

CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcpy.c > CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.i

CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcpy.c -o CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.s

CMakeFiles/push_swap.dir/libft/ft_memset.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_memset.c.o: ../libft/ft_memset.c
CMakeFiles/push_swap.dir/libft/ft_memset.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/push_swap.dir/libft/ft_memset.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_memset.c.o -MF CMakeFiles/push_swap.dir/libft/ft_memset.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_memset.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_memset.c

CMakeFiles/push_swap.dir/libft/ft_memset.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_memset.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_memset.c > CMakeFiles/push_swap.dir/libft/ft_memset.c.i

CMakeFiles/push_swap.dir/libft/ft_memset.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_memset.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_memset.c -o CMakeFiles/push_swap.dir/libft/ft_memset.c.s

CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o: ../libft/ft_strlcat.c
CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o -MF CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcat.c

CMakeFiles/push_swap.dir/libft/ft_strlcat.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_strlcat.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcat.c > CMakeFiles/push_swap.dir/libft/ft_strlcat.c.i

CMakeFiles/push_swap.dir/libft/ft_strlcat.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_strlcat.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlcat.c -o CMakeFiles/push_swap.dir/libft/ft_strlcat.c.s

CMakeFiles/push_swap.dir/libft/ft_strlen.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_strlen.c.o: ../libft/ft_strlen.c
CMakeFiles/push_swap.dir/libft/ft_strlen.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/push_swap.dir/libft/ft_strlen.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_strlen.c.o -MF CMakeFiles/push_swap.dir/libft/ft_strlen.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_strlen.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlen.c

CMakeFiles/push_swap.dir/libft/ft_strlen.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_strlen.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlen.c > CMakeFiles/push_swap.dir/libft/ft_strlen.c.i

CMakeFiles/push_swap.dir/libft/ft_strlen.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_strlen.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_strlen.c -o CMakeFiles/push_swap.dir/libft/ft_strlen.c.s

CMakeFiles/push_swap.dir/libft/ft_atoi.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_atoi.c.o: ../libft/ft_atoi.c
CMakeFiles/push_swap.dir/libft/ft_atoi.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/push_swap.dir/libft/ft_atoi.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_atoi.c.o -MF CMakeFiles/push_swap.dir/libft/ft_atoi.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_atoi.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_atoi.c

CMakeFiles/push_swap.dir/libft/ft_atoi.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_atoi.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_atoi.c > CMakeFiles/push_swap.dir/libft/ft_atoi.c.i

CMakeFiles/push_swap.dir/libft/ft_atoi.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_atoi.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_atoi.c -o CMakeFiles/push_swap.dir/libft/ft_atoi.c.s

CMakeFiles/push_swap.dir/libft/ft_split.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/libft/ft_split.c.o: ../libft/ft_split.c
CMakeFiles/push_swap.dir/libft/ft_split.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/push_swap.dir/libft/ft_split.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/libft/ft_split.c.o -MF CMakeFiles/push_swap.dir/libft/ft_split.c.o.d -o CMakeFiles/push_swap.dir/libft/ft_split.c.o -c /Users/min/Desktop/c/42cursus/push_swap/libft/ft_split.c

CMakeFiles/push_swap.dir/libft/ft_split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/libft/ft_split.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/min/Desktop/c/42cursus/push_swap/libft/ft_split.c > CMakeFiles/push_swap.dir/libft/ft_split.c.i

CMakeFiles/push_swap.dir/libft/ft_split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/libft/ft_split.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/min/Desktop/c/42cursus/push_swap/libft/ft_split.c -o CMakeFiles/push_swap.dir/libft/ft_split.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/push_swap.c.o" \
"CMakeFiles/push_swap.dir/deque.c.o" \
"CMakeFiles/push_swap.dir/utils.c.o" \
"CMakeFiles/push_swap.dir/sort.c.o" \
"CMakeFiles/push_swap.dir/spr.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_calloc.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_memset.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_strlen.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_atoi.c.o" \
"CMakeFiles/push_swap.dir/libft/ft_split.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/push_swap.c.o
push_swap: CMakeFiles/push_swap.dir/deque.c.o
push_swap: CMakeFiles/push_swap.dir/utils.c.o
push_swap: CMakeFiles/push_swap.dir/sort.c.o
push_swap: CMakeFiles/push_swap.dir/spr.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_calloc.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_strjoin.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_strlcpy.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_memset.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_strlcat.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_strlen.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_atoi.c.o
push_swap: CMakeFiles/push_swap.dir/libft/ft_split.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap
.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd /Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/min/Desktop/c/42cursus/push_swap /Users/min/Desktop/c/42cursus/push_swap /Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug /Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug /Users/min/Desktop/c/42cursus/push_swap/cmake-build-debug/CMakeFiles/push_swap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

