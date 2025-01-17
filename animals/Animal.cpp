#include "Animal.hpp"
#include <iostream>

Animal::Animal(const std::string name, int age) : name(name), age(age) {}

Animal::~Animal() {}

std::string Animal::getName() const {
    return name;
}

int Animal::getAge() const {
    return age;
}

void Animal::breathe() const {
    std::cout << name << " is breathing." << std::endl;
}

void Animal::eat() const {
    std::cout << name << " is eating." << std::endl;
}
