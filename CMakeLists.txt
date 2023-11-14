cmake_minimum_required(VERSION 3.20)

project(Snake CXX)

set(SOURCES
    src/Snake/Snake.cpp
    src/Snake/renderer/RenderWindow.cpp
    src/Snake/Utils.cpp
    src/Snake/game/Apple.cpp
    src/Snake/game/Player.cpp
    src/Snake/game/Game.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)

add_executable(Snake ${SOURCES})

target_include_directories(Snake PRIVATE include)