﻿# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("jork")

find_package(SDL2 CONFIG REQUIRED)
find_package(sdl2_image CONFIG REQUIRED)
find_package(sdl2_ttf CONFIG REQUIRED)

add_subdirectory ("source")
