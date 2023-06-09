cmake_minimum_required(VERSION 3.25)
project(CplusPlus)

set(CMAKE_CXX_STANDARD 20)

add_executable(CplusPlus LibraryProject.cpp LibraryProject.cpp ReferencePointers.cpp ReferencePointers.h FileTest.cpp FileTest.h CppPrograms.cpp CppPrograms.h cmake-build-debug/DateCpp.cpp cmake-build-debug/DateCpp.h)
