cmake_minimum_required(VERSION 3.28)
project(space_invaders LANGUAGES CXX)

# Require modern C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(SFML
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG 3.0.2
  GIT_SHALLOW ON
  EXCLUDE_FROM_ALL
  SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(space 
  src/main.cpp
  src/player.cpp
  src/player.h)
target_link_libraries(space PRIVATE SFML::Graphics)
