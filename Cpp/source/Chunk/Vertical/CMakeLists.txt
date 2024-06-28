cmake_minimum_required(VERSION 3.14)

add_library(ChunkVerticalLib ChunkVertical.cpp ChunkVertical.hpp)
target_link_libraries(ChunkVerticalLib PUBLIC DrawableLib)
target_include_directories(ChunkVerticalLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})