#pragma once

class Circle;
class Rectangle;
class Triangle;

class ShapeVisitor {
    /**
     * @class ShapeVisitor
     * @brief Visitor class to calculate the area of a shape.
     *
     * This class is a visitor that can visit objects of type Circle, Rectangle, and Triangle
     * and calculate their area by calling the appropriate visit method.
     */
public:
    /**
     * @brief Pure virtual method that must be implemented by each derived class.
     *        Visits a Circle object and calculates its area.
     * @param circle The Circle object to visit.
     */
    virtual void Visit(const Circle& circle) = 0;

    /**
     * @brief Pure virtual method that must be implemented by each derived class.
     *        Visits a Rectangle object and calculates its area.
     * @param rectangle The Rectangle object to visit.
     */
    virtual void Visit(const Rectangle& rectangle) = 0;

    /**
     * @brief Pure virtual method that must be implemented by each derived class.
     *        Visits a Triangle object and calculates its area.
     * @param triangle The Triangle object to visit.
     */
    virtual void Visit(const Triangle& triangle) = 0;
};
