#include "Dog.hpp"
#include <iostream>

// Constructor
Dog::Dog(const std::string& name, int age) : Animal(name, age) {}

// Override speak
void Dog::speak() const {
    std::cout << name << " says: Woof! Woof!" << std::endl;
}
