#include "PersonCreator.hpp"


/**
 * This is the factory method that must be implemented by each
 * derived class. It creates an ICreature object.
 *
 * @return A pointer to an ICreature object.
 */
ICreature* PersonCreator::factoryMethod() const
{
    return new Person(0, "Adam");
}

