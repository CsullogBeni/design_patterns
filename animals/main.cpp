#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    Dog dog("Buddy", 3);
    Cat cat("Whiskers", 2);

    dog.breathe();
    dog.eat();
    dog.speak();

    cat.breathe();
    cat.eat();
    cat.speak();

    return 0;
}
