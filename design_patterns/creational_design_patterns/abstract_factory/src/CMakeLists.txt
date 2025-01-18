cmake_minimum_required(VERSION 3.10)

# Project name
project(AbstractFactoryProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the source files
set(SOURCES
    main.cpp
)

# Add the header files
set(HEADERS
    Phone.hpp
    Tablet.hpp
    SamsungPhone.hpp
    SamsungTablet.hpp
    ApplePhone.hpp
    AppleTablet.hpp
    ToolFactory.hpp
    SamsungToolFactory.hpp
    AppleToolFactory.hpp
)

# Add the executable
add_executable(abstract_factory ${SOURCES} ${HEADERS})
