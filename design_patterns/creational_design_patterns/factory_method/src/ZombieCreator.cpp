#include "ZombieCreator.hpp"

/**
 * This is the factory method that must be implemented by each
 * derived class. It creates an ICreature object.
 *
 * @return A pointer to an ICreature object.
 */
ICreature* ZombieCreator::factoryMethod() const
{
    return new Zombie(0);
}


