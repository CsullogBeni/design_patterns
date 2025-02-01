#include <vector>
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"
#include "AreaCalculator.hpp"
#include "ShapePrinter.hpp"


/**
 * @brief Main function demonstrating the Visitor design pattern.
 *
 * This function creates a collection of different Shape objects, including a Circle,
 * Rectangle, and Triangle. It then uses a ShapePrinter to print the details of each shape
 * and an AreaCalculator to calculate and print the area of each shape. After processing,
 * it deletes each shape to free up memory.
 */
int main(){

    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(5.0));
    shapes.push_back(new Rectangle(4.0, 6.0));
    shapes.push_back(new Triangle(3.0, 8.0));

    AreaCalculator calculator;
    ShapePrinter printer;

    for (Shape* shape : shapes){
        shape->Accept(printer);
        shape->Accept(calculator);
        delete shape;
    }

    return 0;
}