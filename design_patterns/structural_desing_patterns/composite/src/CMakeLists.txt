cmake_minimum_required(VERSION 3.10)

# Project name
project(compositeProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    main.cpp
    CompositeBox.cpp
)

# Add the header files
set(HEADERS
    Box.hpp
    CompositeBox.hpp
    Product.hpp
)

# Add the executable
add_executable(composite ${SOURCES} ${HEADERS})
