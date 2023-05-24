cmake_minimum_required(VERSION 3.25)
project(CplusPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(CplusPlus LibraryProject.cpp LibraryProject.cpp cmake-build-debug/ReferencePointers.cpp cmake-build-debug/ReferencePointers.h FileTest.cpp FileTest.h)
