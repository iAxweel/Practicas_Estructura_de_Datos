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
include CMakeFiles/Ejercicio_2F.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Ejercicio_2F.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Ejercicio_2F.dir/flags.make

CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.obj: CMakeFiles/Ejercicio_2F.dir/flags.make
CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.obj: ../Practica\ 2/Ejercicio_2F.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Ejercicio_2F.dir\Practica_2\Ejercicio_2F.cpp.obj -c "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 2\Ejercicio_2F.cpp"

CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 2\Ejercicio_2F.cpp" > CMakeFiles\Ejercicio_2F.dir\Practica_2\Ejercicio_2F.cpp.i

CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\Practica 2\Ejercicio_2F.cpp" -o CMakeFiles\Ejercicio_2F.dir\Practica_2\Ejercicio_2F.cpp.s

# Object files for target Ejercicio_2F
Ejercicio_2F_OBJECTS = \
"CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.obj"

# External object files for target Ejercicio_2F
Ejercicio_2F_EXTERNAL_OBJECTS =

../Practica\ 2/Ejercicio_2F.exe: CMakeFiles/Ejercicio_2F.dir/Practica_2/Ejercicio_2F.cpp.obj
../Practica\ 2/Ejercicio_2F.exe: CMakeFiles/Ejercicio_2F.dir/build.make
../Practica\ 2/Ejercicio_2F.exe: CMakeFiles/Ejercicio_2F.dir/linklibs.rsp
../Practica\ 2/Ejercicio_2F.exe: CMakeFiles/Ejercicio_2F.dir/objects1.rsp
../Practica\ 2/Ejercicio_2F.exe: CMakeFiles/Ejercicio_2F.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"..\Practica 2\Ejercicio_2F.exe\""
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Ejercicio_2F.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Ejercicio_2F.dir/build: ../Practica\ 2/Ejercicio_2F.exe

.PHONY : CMakeFiles/Ejercicio_2F.dir/build

CMakeFiles/Ejercicio_2F.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Ejercicio_2F.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Ejercicio_2F.dir/clean

CMakeFiles/Ejercicio_2F.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug" "C:\Users\josue\OneDrive\Desktop\Curse C++\Practicas\cmake-build-debug\CMakeFiles\Ejercicio_2F.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Ejercicio_2F.dir/depend

