#pragma once

#include <iostream>
#include "ShapeVisitor.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"


/**
 * @class ShapePrinter
 * @brief Class that prints the details of a shape.
 *
 * This class is a visitor class that implements the ShapeVisitor interface and
 * provides implementations for printing the details of Circle, Rectangle and
 * Triangle objects.
 */
class ShapePrinter : public ShapeVisitor
{
public:
    /**
     * @brief Prints the radius of a Circle.
     * @param circle The Circle object to visit.
     */
    void Visit(const Circle& circle) override {
        std::cout << "Circle radius: " << circle.radius << std::endl;
    }

    /**
     * @brief Prints the width and height of a Rectangle.
     * @param rectangle The Rectangle object to visit.
     */
    void Visit(const Rectangle& rectangle) override {
        std::cout << "Rectangle width: " << rectangle.width << ", height: " << rectangle.height << std::endl;
    }

    /**
     * @brief Prints the base and height of a Triangle.
     * @param triangle The Triangle object to visit.
     */
    void Visit(const Triangle& triangle) override {
        std::cout << "Triangle base: " << triangle.base << ", height: " << triangle.height << std::endl;
    }
};
