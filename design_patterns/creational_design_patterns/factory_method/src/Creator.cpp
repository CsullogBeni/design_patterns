#include "Creator.hpp"
#include "ICreature.hpp"


/**
 * This function creates an ICreature object by calling the factory method
 * and returning the value it returns.
 *
 * @return A pointer to an ICreature object.
 */
ICreature* Creator::create() {
    std::cout << "create" << std::endl;
    ICreature* creature = this->factoryMethod();
    return creature;
}