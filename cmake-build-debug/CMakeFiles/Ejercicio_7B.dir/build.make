# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Ejercicio_7B.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio_7B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio_7B.dir/flags.make

CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.obj: CMakeFiles/Ejercicio_7B.dir/flags.make
CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.obj: ../Practica\ 7/Ejercicio_7B.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio_7B.dir\Practica_7\Ejercicio_7B.cpp.obj -c "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 7\Ejercicio_7B.cpp"

CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 7\Ejercicio_7B.cpp" > CMakeFiles\Ejercicio_7B.dir\Practica_7\Ejercicio_7B.cpp.i

CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 7\Ejercicio_7B.cpp" -o CMakeFiles\Ejercicio_7B.dir\Practica_7\Ejercicio_7B.cpp.s

# Object files for target Ejercicio_7B
Ejercicio_7B_OBJECTS = \
"CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.obj"

# External object files for target Ejercicio_7B
Ejercicio_7B_EXTERNAL_OBJECTS =

../Practica\ 7/Ejercicio_7B.exe: CMakeFiles/Ejercicio_7B.dir/Practica_7/Ejercicio_7B.cpp.obj
../Practica\ 7/Ejercicio_7B.exe: CMakeFiles/Ejercicio_7B.dir/build.make
../Practica\ 7/Ejercicio_7B.exe: CMakeFiles/Ejercicio_7B.dir/linklibs.rsp
../Practica\ 7/Ejercicio_7B.exe: CMakeFiles/Ejercicio_7B.dir/objects1.rsp
../Practica\ 7/Ejercicio_7B.exe: CMakeFiles/Ejercicio_7B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"..\Practica 7\Ejercicio_7B.exe\""
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio_7B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio_7B.dir/build: ../Practica\ 7/Ejercicio_7B.exe

.PHONY : CMakeFiles/Ejercicio_7B.dir/build

CMakeFiles/Ejercicio_7B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio_7B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio_7B.dir/clean

CMakeFiles/Ejercicio_7B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles\Ejercicio_7B.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio_7B.dir/depend

