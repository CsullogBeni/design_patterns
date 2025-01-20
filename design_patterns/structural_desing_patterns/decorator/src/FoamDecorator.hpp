#pragma once

#include <iostream>
#include "CoffeeDecorator.hpp"


/**
 * @class FoamDecorator
 * @brief Concrete Decorator A: Adds foam to the coffee.
 *
 * This class represents a concrete decorator in the decorator design pattern.
 * It modifies the operation of the component by adding foam to the result.
 */
class FoamDecorator : public CoffeeDecorator
{
public:
    /**
     * @brief Constructor for FoamDecorator.
     * @param comp Pointer to the Component object to be decorated.
     */
    FoamDecorator(Component* comp) : CoffeeDecorator(comp) {};

    /**
     * @brief Adds foam to the operation of the component.
     * @return The result of the operation with foam added.
     */
    const std::string Operation() const override { return CoffeeDecorator::Operation() + ", Foam"; }
};
