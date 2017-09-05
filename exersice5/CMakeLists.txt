get_filename_component(PROJECT_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)
project(${PROJECT_NAME})

add_library(${PROJECT_NAME} STATIC card_shuffle.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_unit_test(
    PROJECT_NAME ${PROJECT_NAME} 
    TEST_SOURCES card_shuffle_unittest.cpp 
    LINK_LIBS ${PROJECT_NAME})
