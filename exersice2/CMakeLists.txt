get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME})

add_library(exersice2 STATIC roman.cpp)
target_include_directories(exersice2 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_unit_test(
    PROJECT_NAME ${PROJECT_NAME} 
    TEST_SOURCES roman_unittest.cpp 
    LINK_LIBS exersice2)
