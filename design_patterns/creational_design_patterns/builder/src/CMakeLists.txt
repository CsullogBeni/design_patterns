cmake_minimum_required(VERSION 3.10)

# Project name
project(BuilderProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    main.cpp
    Pizza.cpp
    PizzaBuilder.cpp
    Director.cpp
)

# Add the header files
set(HEADERS
    Pizza.hpp
    PizzaBuilder.hpp
    Builder.hpp
    Director.hpp
)

# Add the executable
add_executable(builder ${SOURCES} ${HEADERS})
