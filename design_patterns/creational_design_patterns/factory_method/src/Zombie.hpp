/**
 * This class represents a zombie. It is a derived class of
 * ICreature and implements the ICreature interface. It has a private
 * member variable id of type int, which is the id of the zombie.
 * It has a constructor that takes an int as a parameter and
 * initializes the id member variable. It has a virtual destructor
 * and overrides the move method of ICreature. It also has a method
 * attackPerson that takes a Person object as a parameter and attacks the
 * person.
 */
#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "ICreature.hpp"

class Person;

class Zombie : public ICreature
{
public:
    /**
     * Constructor.
     *
     * @param id The id of the zombie.
     */
    Zombie(int id);
    /**
     * Virtual destructor.
     */
    ~Zombie();

    /**
     * This method returns the id of the zombie.
     *
     * @return The id of the zombie.
     */
    int getId();

    /**
     * This is a pure virtual method that must be implemented by each
     * derived class. It moves the zombie to the given position.
     *
     * @param x The new position of the zombie.
     */
    void move(int x) override;
    /**
     * This method attacks the given person.
     *
     * @param person The person to be attacked.
     */
    void attackPerson(Person person);
};

#endif // ZOMBIE_H
