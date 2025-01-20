cmake_minimum_required(VERSION 3.10)

# Project name
project(FactoryMethodProject)

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
    Creator.cpp
    main.cpp
    Person.cpp
    Zombie.cpp
    PersonCreator.cpp
    ZombieCreator.cpp
)

# Add the header files
set(HEADERS
    Creator.hpp
    ICreature.hpp
    Person.hpp
    PersonCreator.hpp
    Zombie.hpp
    ZombieCreator.hpp
)

# Add the executable
add_executable(factory_method ${SOURCES} ${HEADERS})
