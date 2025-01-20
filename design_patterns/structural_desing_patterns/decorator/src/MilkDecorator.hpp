#pragma once

#include <iostream>
#include "CoffeeDecorator.hpp"


/**
 * @class MilkDecorator
 * @brief Concrete Decorator A: Adds milk to the coffee.
 *
 * This class represents a concrete decorator in the decorator design pattern.
 * It modifies the operation of the component by adding milk to the result.
 */
class MilkDecorator : public CoffeeDecorator
{
public:
    /**
     * @brief Constructor for MilkDecorator.
     * @param comp Pointer to the Component object to be decorated.
     */
    MilkDecorator(Component* comp) : CoffeeDecorator(comp) {};

    /**
     * @brief Adds milk to the operation of the component.
     * @return The result of the operation with milk added.
     */
    const std::string Operation() const override { return CoffeeDecorator::Operation() + ", Milk"; }
};
