#pragma once

#include "Shape.hpp"


/**
 * @class Triangle
 * @brief A class representing a triangle shape that can be visited by a ShapeVisitor.
 *
 * This class is a concrete component in the visitor design pattern. It
 * represents a triangle shape with a base and height. It provides an
 * interface for accepting a ShapeVisitor and allows access to its private
 * fields by friend classes.
 */
class Triangle : public Shape
{
private:
    /**
     * @brief The base of the triangle.
     */
    double base;
    
    /**
     * @brief The height of the triangle.
     */
    double height;

public:
    /**
     * @brief Constructor for the Triangle class.
     * @param base The base of the triangle.
     * @param height The height of the triangle.
     */
    Triangle(double base, double height) : base(base), height(height) {}
    
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
