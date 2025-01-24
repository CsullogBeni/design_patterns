# Classical Design Patterns in C++

This project provides an implementation of the classical design patterns in C++. The patterns are implemented in C++ and the project is built using CMake.

The project includes the following design patterns:

- Creational Design Patterns: Singleton, Factory Method, Abstract Factory, Builder, Prototype
- Structural Design Patterns: Adapter, Bridge, Composite, Decorator, Facade, Flyweight, Proxy
- Behavioral Design Patterns: Interpreter, Iterator, Mediator, Memento, Observer, State, Strategy, Template Method, Visitor

## Project Structure

Each project implemt a design pattern. The project structures follow:

- The `README.md` file contains the project description.
- The `src` folder contains the implementation of the design patterns. Contains the header files, the source files and the CMake file.
- The `CMakeLists.txt` file in the `src` folder is used to build the project using CMake.
- The `documentation` folder contains the documentation of the design patterns.

## Usage

The project is built using CMake. The following steps are required to build the project:

- Navigate to the `src` folder of a project.
- Create a `build` folder and navigate into it.
- Run `cmake ..` to generate the CMake files in release mode. Or run `cmake -DCMAKE_BUILD_TYPE=Debug ..` to generate the CMake files in debug mode.
- Run `make` to build the project.
- Run `./{project name}` to run the project.

## Credits

The links bellow were used to learn about the classical design patterns:

- [Refactoring Guru - Design Patterns](https://refactoring.guru/design-patterns)
