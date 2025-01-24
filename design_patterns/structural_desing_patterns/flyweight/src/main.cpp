#include <iostream>

#include "Forest.hpp"


/**
 * @brief The main entry point of the program.
 *
 * Creates a forest of trees and plants multiple trees in the forest.
 * The forest is then displayed.
 * 
 * Represents the operation of the Flyweight design pattern.
 */
int main(){

    Forest forest = Forest();
    forest.PlantTree("oak", "green", "smooth", 10, 20);
    forest.PlantTree("oak", "green", "smooth", 20, 30);
    
    forest.PlantTree("pine", "green", "average", 30, 40);
    forest.PlantTree("pine", "green", "average", 40, 50);

    forest.Display();


    return 0;
}