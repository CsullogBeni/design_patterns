#pragma once

#include <iostream>
#include "CoffeeDecorator.hpp"


/**
 * @class MilkDecorator
 * @brief Concrete Decorator A: Adds sugar to the coffee.
 *
 * This class represents a concrete decorator in the decorator design pattern.
 * It modifies the operation of the component by adding sugar to the result.
 */
class SugarDecorator : public CoffeeDecorator
{
public:
    /**
     * @brief Constructor for SugarDecorator.
     * @param comp Pointer to the Component object to be decorated.
     */
    SugarDecorator(Component* comp) : CoffeeDecorator(comp) {};

    /**
     * @brief Adds sugar to the operation of the component.
     * @return The result of the operation with sugar added.
     */
    const std::string Operation() const override { return CoffeeDecorator::Operation() + ", Sugar"; }
};
