#include "Warrior.hpp"


/**
 * @brief Entry point of the program.
 *
 * This program demonstrates the Prototype design pattern by creating two
 * Warrior objects: one directly and one by cloning the first one. Both
 * objects are then asked to fight. The program also demonstrates the
 * correct way of cleaning up dynamically allocated objects.
 */
int main(){
    Warrior *warrior1 = new Warrior();
    warrior1->Fight();

    Warrior *warrior2 = warrior1->Clone();
    warrior2->Fight();

    delete warrior1;
    delete warrior2;

    return 0;
}