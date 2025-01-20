#pragma once

#include <iostream>
#include "Component.hpp"


/**
 * @class CoffeeDecorator
 * @brief The base decorator class from decorator design pattern.
 *
 * This class represents the base decorator class from the decorator design pattern.
 * It holds a pointer to a Component object and implements the Component interface.
 * It delegates the operation to the component and adds its own behavior to the result.
 */
class CoffeeDecorator : public Component
{
protected:
    /**
     * Pointer to the Component object that is being decorated.
     */
    Component* component;
public:
    /**
     * @brief Constructor.
     *
     * Constructor that takes a pointer to a Component object as parameter.
     * It sets the pointer to the component being decorated.
     * @param comp Pointer to the Component object that is being decorated.
     */
    CoffeeDecorator(Component* comp) : component(comp) {}

    /**
     * @brief Method to get the operation of the component.
     *
     * This method delegates the operation to the component and adds its own
     * behavior to the result.
     * @return The result of the operation.
     */
    const std::string Operation() const override { return this->component->Operation(); };
};
