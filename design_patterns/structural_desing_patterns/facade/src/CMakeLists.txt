cmake_minimum_required(VERSION 3.10)

# Project name
project(FacadeProject)

if (CMAKE_BUILD_TYPE MATCHES Debug)
    # Set C++ standard with address sanitizer
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -g")
    set(CMAKE_LINKER_FLAGS "${CMAKE_LINKER_FLAGS} -fsanitize=address")
else()
    # Set C++ standard
    set(CMAKE_CXX_STANDARD 17)
    set(CMAKE_CXX_STANDARD_REQUIRED True)
endif()

# Add the source files
set(SOURCES
    main.cpp
    DataBase.cpp
    DataReader.cpp
    StatisticMaker.cpp
    StatisticMakerController.cpp
)

# Add the header files
set(HEADERS
    DataBase.hpp
    DataReader.hpp
    StatisticMaker.hpp
    StatisticMakerController.hpp
)

# Add the executable
add_executable(facade ${SOURCES} ${HEADERS})
