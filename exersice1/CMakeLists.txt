get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME})

add_library(exersice1 STATIC say.cpp)
target_include_directories(exersice1 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_unit_test(
    PROJECT_NAME ${PROJECT_NAME} 
    TEST_SOURCES say_unittest.cpp 
    LINK_LIBS exersice1)
