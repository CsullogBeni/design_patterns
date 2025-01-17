cmake_minimum_required(VERSION 3.10)

# Project name
project(AnimalProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    Animal.cpp
    Dog.cpp
    Cat.cpp
    main.cpp
)

# Add the header files
set(HEADERS
    Animal.hpp
    Dog.hpp
    Cat.hpp
)

# Add the executable
add_executable(animal_program ${SOURCES} ${HEADERS})
