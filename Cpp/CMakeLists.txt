cmake_minimum_required(VERSION 3.14)

# the project name
project(MapChunkAnalyzer)

set(SOURCE_DIR source)
set(SOURCES ${SOURCE_DIR}/main.cpp)

include_directories(${SOURCE_DIR})

add_executable(${CMAKE_PROJECT_NAME} ${SOURCES})