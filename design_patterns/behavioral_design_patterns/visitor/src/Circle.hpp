#pragma once

#include "Shape.hpp"


/**
 * @class Circle
 * @brief A class that represents a circle shape.
 *
 * This class is derived from the Shape class and provides the necessary
 * implementation for the Circle shape. The class has a private member
 * variable radius of type double which stores the radius of the circle.
 * The class also provides a constructor and a public method Accept which
 * is used to accept a ShapeVisitor and perform operations on the shape.
 */
class Circle : public Shape
{
private:
    /**
     * @brief The radius of the circle.
     */
    double radius;

public:
    /**
     * @brief Constructor to initialize the radius of the circle.
     *
     * @param radius The radius of the circle.
     */
    Circle(double radius) : radius(radius) {}

    /**
     * @brief Accepts a ShapeVisitor and performs operations on the shape.
     *
     * @param visitor The ShapeVisitor that performs operations on the shape.
     */
    void Accept(ShapeVisitor& visitor) const override
    {
        visitor.Visit(*this);
    }

    /**
     * @brief Friend declaration for the AreaCalculator and ShapePrinter classes.
     */
    friend class AreaCalculator;
    friend class ShapePrinter;
};

