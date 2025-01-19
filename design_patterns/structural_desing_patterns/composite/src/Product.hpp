#pragma once

#include <iostream>
#include "Box.hpp"


/**
 * @class Product
 * @brief A class representing a product in a box.
 *
 * This class is the leaf in the composite design pattern. It is a concrete
 * component that represents a product in a box. It implements the
 * Box interface and provides an interface for getting the value and name of
 * the product.
 */
class Product : public Box
{
private:
    /**
     * @brief  The value of the product.
     * 
     */
    int productValue;

    /**
     * @brief The name of the product.
     * 
     */
    std::string productName;
public:
    /**
     * @brief Constructor.
     * @param name The name of the product.
     * @param value The value of the product.
     */
    Product(const std::string& name, int value) : productName(name), productValue(value) {};

    /**
     * @brief Pure virtual method to get the value of the product.
     * @return The value of the product.
     */
    const int GetValue() const override { return productValue; };

    /**
     * @brief Pure virtual method to get the product name of the box.
     * @return The name of the product.
     */
    const std::string GetName() const override { return productName; };
};
