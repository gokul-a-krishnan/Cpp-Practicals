# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Vinodh\CLionProjects\PostfixEvaluation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PostfixEvaluation.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PostfixEvaluation.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PostfixEvaluation.dir/flags.make

CMakeFiles/PostfixEvaluation.dir/main.cpp.obj: CMakeFiles/PostfixEvaluation.dir/flags.make
CMakeFiles/PostfixEvaluation.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PostfixEvaluation.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PostfixEvaluation.dir\main.cpp.obj -c C:\Users\Vinodh\CLionProjects\PostfixEvaluation\main.cpp

CMakeFiles/PostfixEvaluation.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PostfixEvaluation.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Vinodh\CLionProjects\PostfixEvaluation\main.cpp > CMakeFiles\PostfixEvaluation.dir\main.cpp.i

CMakeFiles/PostfixEvaluation.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PostfixEvaluation.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Vinodh\CLionProjects\PostfixEvaluation\main.cpp -o CMakeFiles\PostfixEvaluation.dir\main.cpp.s

CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.requires

CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.provides: CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\PostfixEvaluation.dir\build.make CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.provides

CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.provides.build: CMakeFiles/PostfixEvaluation.dir/main.cpp.obj


# Object files for target PostfixEvaluation
PostfixEvaluation_OBJECTS = \
"CMakeFiles/PostfixEvaluation.dir/main.cpp.obj"

# External object files for target PostfixEvaluation
PostfixEvaluation_EXTERNAL_OBJECTS =

PostfixEvaluation.exe: CMakeFiles/PostfixEvaluation.dir/main.cpp.obj
PostfixEvaluation.exe: CMakeFiles/PostfixEvaluation.dir/build.make
PostfixEvaluation.exe: CMakeFiles/PostfixEvaluation.dir/linklibs.rsp
PostfixEvaluation.exe: CMakeFiles/PostfixEvaluation.dir/objects1.rsp
PostfixEvaluation.exe: CMakeFiles/PostfixEvaluation.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PostfixEvaluation.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PostfixEvaluation.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PostfixEvaluation.dir/build: PostfixEvaluation.exe

.PHONY : CMakeFiles/PostfixEvaluation.dir/build

CMakeFiles/PostfixEvaluation.dir/requires: CMakeFiles/PostfixEvaluation.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/PostfixEvaluation.dir/requires

CMakeFiles/PostfixEvaluation.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PostfixEvaluation.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PostfixEvaluation.dir/clean

CMakeFiles/PostfixEvaluation.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Vinodh\CLionProjects\PostfixEvaluation C:\Users\Vinodh\CLionProjects\PostfixEvaluation C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug C:\Users\Vinodh\CLionProjects\PostfixEvaluation\cmake-build-debug\CMakeFiles\PostfixEvaluation.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PostfixEvaluation.dir/depend

