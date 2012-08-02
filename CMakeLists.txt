# Project Settings
cmake_minimum_required (VERSION 2.6)
project (SpaceGame)

set (CMAKE_BUILD_TYPE Debug)

set (CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/Modules)

set (EXECUTABLE "spacegame")
set (SRC_FILES
  src/main.cpp
  src/map.cpp
  src/graphics.cpp
  src/button.cpp
  src/tile.cpp)

# Libraries
set (CMAKE_FIND_FRAMEWORK "NEVER")
find_package (SFML REQUIRED system window graphics)
find_package (Noise REQUIRED noise)
set (CMAKE_FIND_FRAMEWORK "ONCE")
find_package (OpenGL REQUIRED)

# Build Settings
set (PROJECT_INCLUDES ${SFML_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIRS})

# Build Setup
add_executable (${EXECUTABLE} ${SRC_FILES})

include_directories (${PROJECT_INCLUDES})
target_link_libraries (${EXECUTABLE} ${SFML_LIBRARIES})

message ("POSIX enviornment, binding with OpenGL")
target_link_libraries (${EXECUTABLE} ${OPENGL_LIBRARIES})
