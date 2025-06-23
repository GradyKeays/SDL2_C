cmake_minimum_required(VERSION 3.15)
project(sdl_template)

set(CMAKE_C_STANDARD 99)

# Set SDL2 root directory
set(SDL2_DIR "${CMAKE_SOURCE_DIR}/libs/SDL2")

# Add SDL2 include path
include_directories(${SDL2_DIR}/include)

# Link SDL2 library path
link_directories(${SDL2_DIR}/lib)

# Create executable
add_executable(sdl_template src/main.c src/init.c src/draw.c src/input.c)

# Link SDL2 libraries
target_link_libraries(sdl_template
    SDL2main SDL2
    SDL2_image
    SDL2_mixer
    SDL2_ttf
)
