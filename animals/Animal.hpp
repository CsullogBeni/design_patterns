#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
    protected:
    std::string name;
    int age;

    public:
    
    Animal(std::string name, int age);
    virtual ~Animal();

    std::string getName() const;
    int getAge() const;

    virtual void breathe() const;
    virtual void eat() const;
    virtual void speak() const = 0;
};

#endif // ANIMAL_HPP
