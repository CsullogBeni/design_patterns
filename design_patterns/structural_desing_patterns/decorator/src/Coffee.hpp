#pragma once

#include <iostream>
#include "Component.hpp"


/**
 * @class Coffee
 * @brief A class representing a concrete component from the decorator design pattern.
 *
 * This class is a concrete component in the decorator design pattern. It represents
 * a coffee with no additional ingredients.
 */
class Coffee : public Component
{
public:
    /**
     * @brief Constructor.
     *
     * Default constructor.
     */
    Coffee() = default;

    /**
     * @brief Method to get the operation of the coffee.
     * @return The name of the coffee.
     *
     * This method returns the name of the coffee.
     */
    const std::string Operation() const override { return "Coffee"; };
};
