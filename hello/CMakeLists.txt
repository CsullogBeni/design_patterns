cmake_minimum_required(VERSION 3.10)

project(HelloWorld VERSION 1.0)

add_executable(hello_world hello_world.cpp)

# Custom target to run the program
add_custom_target(run
    COMMAND hello_world
    DEPENDS hello_world
    WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    COMMENT "Running the Hello, World! program"
)
