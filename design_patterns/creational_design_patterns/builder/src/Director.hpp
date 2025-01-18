#pragma once


#include "PizzaBuilder.hpp"

/**
 * This class is a director class that implements the Builder design pattern.
 * It provides methods to create objects of class Pizza by using the methods
 * of class PizzaBuilder.
 */
class Director
{
private:
    /**
     * This is a pointer to the object of class PizzaBuilder that is used
     * by the director to create objects of class Pizza.
     */    
    PizzaBuilder* builder;
public:
    Director();
    ~Director();

    void SetBuilder(PizzaBuilder* builder);

    void MakeMargherita();
    void MakeCotto();
    void MakePizzizare();
    void MakeBianca();
};

