#pragma once

#include "Shape.hpp"


/**
 * @class Rectangle
 * @brief A class representing a rectangle shape that can be visited by a ShapeVisitor.
 *
 * This class is a concrete component in the visitor design pattern. It
 * represents a rectangle shape with a width and height. It provides an
 * interface for accepting a ShapeVisitor and two friends classes that are
 * allowed to access the private fields of the class.
 */
class Rectangle : public Shape
{
private:
    /**
     * @brief The width of the rectangle.
     */
    double width;

    /**
     * @brief The height of the rectangle.
     */
    double height;

public:
    /**
     * @brief Constructor for the Rectangle class.
     * @param width The width of the rectangle.
     * @param height The height of the rectangle.
     */
    Rectangle(double width, double height) : width(width), height(height) {}

    /**
     * @brief Accepts a ShapeVisitor and calls the appropriate visit method.
     * @param visitor The ShapeVisitor to accept.
     */
    void Accept(ShapeVisitor& visitor) const override
    {
        visitor.Visit(*this);
    }

    /**
     * @brief Declares two friend classes that are allowed to access the
     *        private fields of the class.
     */
    friend class AreaCalculator;
    friend class ShapePrinter;
};
