cmake_minimum_required(VERSION 3.16)
project(Practicas)

set(CMAKE_CXX_STANDARD 14)




add_executable(Practica_1A "Practica 1/Practica_1A.cpp" "Practica 1/Practica_1B.cpp" "Practica 1/Practica_1C.cpp" "Practica 2/Ejercicio_2A.cpp")
set_target_properties(Practica_1A PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Practica 1/")


add_executable(Practica_1B "Practica 1/Practica_1B.cpp")
set_target_properties(Practica_1B PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Practica 1/")
add_executable(Practica_1C "Practica 1/Practica_1C.cpp")
set_target_properties(Practica_1C PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Practica 1/")
add_executable(Ejercicio_2A "Practica 2/Ejercicio_2A.cpp")
set_target_properties(Ejercicio_2A PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/Practica 2/")