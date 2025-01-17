#include "Cat.hpp"
#include <iostream>

// Constructor
Cat::Cat(const std::string& name, int age) : Animal(name, age) {}

// Override speak
void Cat::speak() const {
    std::cout << name << " says: Meow!" << std::endl;
}
