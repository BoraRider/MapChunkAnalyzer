cmake_minimum_required(VERSION 3.14)

set(SOURCES main.cpp)

add_subdirectory(DrawingEngine)

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})

target_link_libraries(${CMAKE_PROJECT_NAME} PRIVATE DrawingEngineLib)