cmake_minimum_required(VERSION 3.5)

# Project Name
project(tools)

# Find OpenCV Package
find_package(OpenCV REQUIRED)

# Set Source Directories
set(SOURCE_DIRS
    #image/image-to-ascii
)

# Set Core Sources
set(CORE_SOURCES
    core/menu.cpp
)

# Set Core Headers
set(CORE_HEADERS
    core/toolsList.hpp
    core/Core.hpp
    core/Definitions.hpp
    core/toolsList.hpp
)

# Add Sources
foreach(DIR ${SOURCE_DIRS})
    file(GLOB_RECURSE "${DIR}_SOURCES" "${DIR}/*.cpp")
    file(GLOB_RECURSE "${DIR}_HEADERS" "${DIR}/*.hpp")
    set(SOURCES ${SOURCES} ${${DIR}_SOURCES})
    set(HEADERS ${HEADERS} ${${DIR}_HEADERS})
endforeach()

# Add Executable
add_executable(menu ${CORE_SOURCES} ${CORE_HEADERS} ${SOURCES} ${HEADERS})

# Link with OpenCV Libraries
target_link_libraries(menu ${OpenCV_LIBS})
