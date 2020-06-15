cmake_minimum_required (VERSION 2.6)
project (ouril)
find_package (SFML 2 REQUIRED network audio graphics window system)
include_directories(include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set( CMAKE_EXPORT_COMPILE_COMMANDS ON )
find_package(OpenMP REQUIRED)
set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")

FILE(GLOB mysrc src/*.cc)
add_compile_options(-Wall -O3)
add_executable(ouril ${mysrc} main.cc)
target_link_libraries(ouril sfml-graphics sfml-audio)
