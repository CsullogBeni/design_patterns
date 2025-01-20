#include <iostream>
#include <memory>
#include "Component.hpp"
#include "Coffee.hpp"
#include "MilkDecorator.hpp"
#include "SugarDecorator.hpp"
#include "FoamDecorator.hpp"


/**
 * @brief Entry point of the program demonstrating the Decorator design pattern.
 *
 * This function creates a basic coffee object and decorates it with milk, sugar,
 * and foam using the Decorator design pattern. It then prints out the result of
 * each decorated coffee object. Represents the client from the Decorator design pattern.
 */
int main() {

    Component* coffee = new Coffee();
    Component* milk = new MilkDecorator(coffee);
    Component* sugar = new SugarDecorator(milk);
    Component* foam = new FoamDecorator(sugar);

    std::cout << "Coffee: " << coffee->Operation() << std::endl;
    std::cout << "Milk: " << milk->Operation() << std::endl;
    std::cout << "Sugar: " << sugar->Operation() << std::endl;
    std::cout << "Foam: " << foam->Operation() << std::endl;

    delete foam;
    delete sugar;
    delete coffee;
    delete milk;

    return 0;
}
