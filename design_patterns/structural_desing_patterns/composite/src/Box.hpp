#pragma once

#include <iostream>


/**
 * @class Box
 * @brief Abstract base class representing a box, component used in the composite pattern.
 *
 * This class is the base class for all boxes in the composite pattern. It provides
 * an interface for getting the value and name of a box. It declares pure virtual methods
 * for getting the value and name of the box, and each derived class must implement these
 * methods.
 */
class Box
{
public:
    /**
     * @brief Pure virtual method to get the value of the product.
     * @return The value of the box.
     */
    virtual const int GetValue() const = 0;
    /**
     * @brief Pure virtual method to get the product name of the box.
     * @return The name of the box.
     */
    virtual const std::string GetName() const = 0;  
};
