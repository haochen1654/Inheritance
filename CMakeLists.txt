# CMakeList.txt : CMake project for CMakeProject4, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project(Inheritance VERSION 1.0)



# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add source to this library
add_library(
  Shape
  "shape.h" 
)

add_library(
  GameCharactor
  "game_charactor.h" 
)

# Add source to this project's executable.
add_executable (
    Inheritance
    "main.cpp" 
)

set_target_properties(Shape GameCharactor PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(Inheritance Shape GameCharactor)