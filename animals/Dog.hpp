#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
public:
    // Constructor
    Dog(const std::string& name, int age);

    // Override speak function
    void speak() const override;
};

#endif // DOG_HPP
