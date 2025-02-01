#pragma once

#include "ShapeVisitor.hpp"


/**
 * @class Shape
 * @brief Abstract base class for all shapes.
 *
 * This class defines a common interface for various types of shapes.
 * Each derived shape must implement the accept method to allow a visitor 
 * to perform operations on the shape.
 */
class Shape
{
public:
    /**
     * @brief Virtual destructor for the Shape class.
     */
    virtual ~Shape() = default;

    /**
     * @brief Accepts a visitor to perform operations on the shape.
     * @param visitor The ShapeVisitor instance to accept.
     */
    virtual void Accept(ShapeVisitor& visitor) const = 0;
};
