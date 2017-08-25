cmake_minimum_required(VERSION 2.8.12)
project(tdd-workshop)

SET(DOCTEST_WITH_TESTS OFF CACHE BOOL "Build tests/examples" FORCE)
add_subdirectory(doctest)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(cmake)
add_subdirectory(exersice1)
add_subdirectory(exersice1.2)
add_subdirectory(exersice2)
add_subdirectory(exersice3)
add_subdirectory(exersice4)

