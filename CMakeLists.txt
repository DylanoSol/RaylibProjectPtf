cmake_minimum_required(VERSION 4.1)
project(RaylibProjectPtf)

set(CMAKE_CXX_STANDARD 20)
add_subdirectory(lib)


add_executable(RaylibProjectPtf main.cpp)

target_link_libraries(RaylibProjectPtf PRIVATE raylib_static)

target_include_directories(RaylibProjectPtf PRIVATE
        ${CMAKE_SOURCE_DIR}/lib/raylib/src)


