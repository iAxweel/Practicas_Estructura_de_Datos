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
include CMakeFiles/Ejercicio_8A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio_8A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio_8A.dir/flags.make

CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.obj: CMakeFiles/Ejercicio_8A.dir/flags.make
CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.obj: ../Practica\ 8/Ejercicio_8A.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio_8A.dir\Practica_8\Ejercicio_8A.cpp.obj -c "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 8\Ejercicio_8A.cpp"

CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 8\Ejercicio_8A.cpp" > CMakeFiles\Ejercicio_8A.dir\Practica_8\Ejercicio_8A.cpp.i

CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 8\Ejercicio_8A.cpp" -o CMakeFiles\Ejercicio_8A.dir\Practica_8\Ejercicio_8A.cpp.s

# Object files for target Ejercicio_8A
Ejercicio_8A_OBJECTS = \
"CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.obj"

# External object files for target Ejercicio_8A
Ejercicio_8A_EXTERNAL_OBJECTS =

../Practica\ 8/Ejercicio_8A.exe: CMakeFiles/Ejercicio_8A.dir/Practica_8/Ejercicio_8A.cpp.obj
../Practica\ 8/Ejercicio_8A.exe: CMakeFiles/Ejercicio_8A.dir/build.make
../Practica\ 8/Ejercicio_8A.exe: CMakeFiles/Ejercicio_8A.dir/linklibs.rsp
../Practica\ 8/Ejercicio_8A.exe: CMakeFiles/Ejercicio_8A.dir/objects1.rsp
../Practica\ 8/Ejercicio_8A.exe: CMakeFiles/Ejercicio_8A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"..\Practica 8\Ejercicio_8A.exe\""
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio_8A.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio_8A.dir/build: ../Practica\ 8/Ejercicio_8A.exe

.PHONY : CMakeFiles/Ejercicio_8A.dir/build

CMakeFiles/Ejercicio_8A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio_8A.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio_8A.dir/clean

CMakeFiles/Ejercicio_8A.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles\Ejercicio_8A.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio_8A.dir/depend

