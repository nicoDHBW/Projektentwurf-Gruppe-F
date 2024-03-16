# define the minimum cmake version
cmake_minimum_required(VERSION 3.20)

# define the project name
project(Projektentwurf-Gruppe-F VERSION 1.0 LANGUAGES C CXX)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
if(MSVC)
    add_compile_options(-Wall)
else()
    add_compile_options(-Wall -Wextra -pedantic -O0)
endif()

# add a library for your functions
add_library(uni_library STATIC
    src/developer_group.c
    src/developer.c)
# add the includes to the library
target_include_directories(uni_library PUBLIC include)

# add an executabel and assign files to it
add_executable(Projektentwurf-Gruppe-F_main src/main.c)
# add the include directories
target_include_directories(Projektentwurf-Gruppe-F_main PUBLIC include)
# link your library
target_link_libraries(Projektentwurf-Gruppe-F_main PRIVATE uni_library)

# installing targets
install(TARGETS Projektentwurf-Gruppe-F_main DESTINATION .)

