#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
    // Constructor
    Cat(const std::string& name, int age);

    // Override speak function
    void speak() const override;
};

#endif // CAT_HPP
