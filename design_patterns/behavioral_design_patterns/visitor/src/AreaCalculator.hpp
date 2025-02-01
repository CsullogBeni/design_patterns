#pragma once

#include <iostream>
#include <cmath>
#include "ShapeVisitor.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"


/**
 * @class AreaCalculator
 * @brief Visitor class to calculate the area of various shapes.
 *
 * The AreaCalculator class implements the ShapeVisitor interface and provides
 * implementations for calculating the area of Circle, Rectangle, and Triangle
 * objects.
 */
class AreaCalculator : public ShapeVisitor
{
public:
    /**
     * @brief Calculates and prints the area of a Circle.
     * @param circle The Circle object to visit.
     */
    void Visit(const Circle& circle) override {
        double area = 3.14 * std::pow(circle.radius, 2);
        std::cout << "Circle area: " << area << std::endl;
    }

    /**
     * @brief Calculates and prints the area of a Rectangle.
     * @param rectangle The Rectangle object to visit.
     */
    void Visit(const Rectangle& rectangle) override {
        double area = rectangle.width * rectangle.height;
        std::cout << "Rectangle area: " << area << std::endl;
    }

    /**
     * @brief Calculates and prints the area of a Triangle.
     * @param triangle The Triangle object to visit.
     */
    void Visit(const Triangle& triangle) override {
        double area = 0.5 * triangle.base * triangle.height;
        std::cout << "Triangle area: " << area << std::endl;
    }
};
