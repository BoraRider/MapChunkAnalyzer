cmake_minimum_required(VERSION 3.14)

add_library(DrawableLib Drawable.cpp Drawable.hpp)
target_include_directories(DrawableLib PUBLIC .)
target_link_libraries(DrawableLib PUBLIC FrameBufferLib)