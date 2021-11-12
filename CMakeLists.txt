

cmake_minimum_required(VERSION 3.0.0)

project(Project_Rbc VERSION 1.0.0)


include_directories(src)

file(GLOB_RECURSE SOURCES src/*.cpp)

add_executable(rbc main.cpp ${SOURCES})

