cmake_minimum_required(VERSION 3.14)

add_library(DrawingEngineLib DrawingEngine.cpp DrawingEngine.hpp)
add_library(DrawingEngineTerminalLib DrawingEngineTerminal.cpp DrawingEngineTerminal.hpp)

target_link_libraries(DrawingEngineLib PUBLIC 
                        FrameBufferLib
                        DrawableLib
                        )

target_link_libraries(DrawingEngineTerminalLib PUBLIC 
                        DrawingEngineLib
                        )

target_include_directories(DrawingEngineLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(DrawingEngineTerminalLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})