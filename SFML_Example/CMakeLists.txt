 cmake_minimum_required(VERSION 3.10)
project(SFML_EXAMPLE VERSION 1.0)

set(CXX_STANDARD 17)


# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)
link_libraries("C:/SFML_mingw64/SFML/lib")

# set SFML Cmake directory
set(SFML_DIR "C:/SFML_mingw64/SFML/lib/cmake/SFML")
# find the SFML require packages
find_package(SFML 2.6 COMPONENTS system window graphics audio network REQUIRED)
find_package(freetype REQUIRED)

# for recursively compile .cpp files
file(GLOB_RECURSE SRC_FILES src/*.cpp)

add_executable(SFML_EXAMPLE ${SRC_FILES})   
target_link_libraries(SFML_EXAMPLE
    sfml-graphics
    sfml-window
    sfml-system
    sfml-audio
    sfml-network
    opengl32
    winmm
    gdi32
    user32
    freetype

)