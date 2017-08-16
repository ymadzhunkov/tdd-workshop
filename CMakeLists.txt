cmake_minimum_required(VERSION 2.8.12)
project(tdd-workshop)

SET(DOCTEST_WITH_TESTS OFF CACHE BOOL "Build tests/examples" FORCE)
add_subdirectory(doctest)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(cmake)
add_subdirectory(exersice1)

