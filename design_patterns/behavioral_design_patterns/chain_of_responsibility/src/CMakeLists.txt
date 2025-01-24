cmake_minimum_required(VERSION 3.10)

# Project name
project(ChainOfResponsibilityProject)   

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
)

# Add the header files
set(HEADERS
    Password.hpp
    BaseHandler.hpp
    ContainsNumberHandler.hpp
    MinLenghtHandler.hpp
    ContainsOnlyEnglishLetters.hpp
    ContainsSpecialCharacterHandler.hpp
)

# Add the executable
add_executable(chain_of_responsibility ${SOURCES} ${HEADERS})
