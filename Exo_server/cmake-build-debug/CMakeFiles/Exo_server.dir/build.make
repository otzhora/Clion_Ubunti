# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = /home/yriy/Clion/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/yriy/Clion/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yriy/CLionProjects/Exo_server

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yriy/CLionProjects/Exo_server/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Exo_server.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Exo_server.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Exo_server.dir/flags.make

CMakeFiles/Exo_server.dir/main.cpp.o: CMakeFiles/Exo_server.dir/flags.make
CMakeFiles/Exo_server.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yriy/CLionProjects/Exo_server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Exo_server.dir/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Exo_server.dir/main.cpp.o -c /home/yriy/CLionProjects/Exo_server/main.cpp

CMakeFiles/Exo_server.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Exo_server.dir/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/yriy/CLionProjects/Exo_server/main.cpp > CMakeFiles/Exo_server.dir/main.cpp.i

CMakeFiles/Exo_server.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Exo_server.dir/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/yriy/CLionProjects/Exo_server/main.cpp -o CMakeFiles/Exo_server.dir/main.cpp.s

CMakeFiles/Exo_server.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Exo_server.dir/main.cpp.o.requires

CMakeFiles/Exo_server.dir/main.cpp.o.provides: CMakeFiles/Exo_server.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Exo_server.dir/build.make CMakeFiles/Exo_server.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Exo_server.dir/main.cpp.o.provides

CMakeFiles/Exo_server.dir/main.cpp.o.provides.build: CMakeFiles/Exo_server.dir/main.cpp.o


# Object files for target Exo_server
Exo_server_OBJECTS = \
"CMakeFiles/Exo_server.dir/main.cpp.o"

# External object files for target Exo_server
Exo_server_EXTERNAL_OBJECTS =

Exo_server: CMakeFiles/Exo_server.dir/main.cpp.o
Exo_server: CMakeFiles/Exo_server.dir/build.make
Exo_server: CMakeFiles/Exo_server.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yriy/CLionProjects/Exo_server/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Exo_server"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Exo_server.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Exo_server.dir/build: Exo_server

.PHONY : CMakeFiles/Exo_server.dir/build

CMakeFiles/Exo_server.dir/requires: CMakeFiles/Exo_server.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Exo_server.dir/requires

CMakeFiles/Exo_server.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Exo_server.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Exo_server.dir/clean

CMakeFiles/Exo_server.dir/depend:
	cd /home/yriy/CLionProjects/Exo_server/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yriy/CLionProjects/Exo_server /home/yriy/CLionProjects/Exo_server /home/yriy/CLionProjects/Exo_server/cmake-build-debug /home/yriy/CLionProjects/Exo_server/cmake-build-debug /home/yriy/CLionProjects/Exo_server/cmake-build-debug/CMakeFiles/Exo_server.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Exo_server.dir/depend

