cmake_minimum_required(VERSION 3.10)

# Project name
project(FactoryMethodProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

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
