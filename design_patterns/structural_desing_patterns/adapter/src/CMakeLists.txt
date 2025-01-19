cmake_minimum_required(VERSION 3.10)

# Project name
project(AdapterProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    main.cpp
    KilometerToMilesAdapter.cpp
    MapApplication.cpp
)

# Add the header files
set(HEADERS
    KilometerToMilesAdapter.hpp
    MapApplication.hpp
    AdapterInterface.hpp
    RouteTimeCalculator.hpp
)

# Add the executable
add_executable(adapter ${SOURCES} ${HEADERS})
