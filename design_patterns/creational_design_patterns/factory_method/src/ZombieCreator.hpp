#pragma once

#include "Creator.hpp"
#include "Zombie.hpp"

/**
 * This class is a concrete creator class that implements the
 * factory method design pattern. It creates a Zombie object.
 */
class ZombieCreator : public Creator
{
    protected:
        /**
         * This is the factory method that must be implemented by each
         * derived class. It creates an ICreature object.
         *
         * @return A pointer to an ICreature object.
         */
        virtual ICreature* factoryMethod() const override;
};


