cmake_minimum_required(VERSION 3.14)

add_library(DrawingEngineLib DrawingEngine.cpp DrawingEngine.hpp)
add_library(DrawingEngineTerminalLib DrawingEngineTerminal.cpp DrawingEngineTerminal.hpp)

add_subdirectory(FrameBuffer)

target_link_libraries(DrawingEngineTerminalLib PUBLIC 
                        DrawingEngineLib
                        FrameBufferLib
                        )