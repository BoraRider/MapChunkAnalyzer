cmake_minimum_required(VERSION 3.14)

add_library(FrameBufferLib FrameBuffer.cpp FrameBuffer.hpp)
target_include_directories(FrameBufferLib PUBLIC .)