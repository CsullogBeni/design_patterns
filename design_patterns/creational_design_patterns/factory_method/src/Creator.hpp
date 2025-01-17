#pragma once

#include <iostream>

class ICreature;

/**
 * This class is an abstract factory class that implements the
 * factory method design pattern. It is the base class for all
 * concrete factory classes.
 */
class Creator
{
    protected:
    /**
     * This is the factory method that must be implemented by each
     * derived class. It creates an ICreature object.
     *
     * @return A pointer to an ICreature object.
     */
    virtual ICreature* factoryMethod() const = 0;
    
    public:
    /**
     * Virtual destructor.
     */
    virtual ~Creator() {}

    /**
     * This is the main method of this class. It creates an ICreature
     * object by calling the factory method and returns the result.
     *
     * @return A pointer to an ICreature object.
     */
    ICreature* create();

    /**
     * This is a pointer to the last object created by the create method.
     */
    ICreature* product;
};
