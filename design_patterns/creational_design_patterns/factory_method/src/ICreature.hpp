#ifndef ICREATURE_H
#define ICREATURE_H

/**
 * This is an abstract base class that defines the interface for all
 * classes that implement the ICreature interface. It declares the
 * virtual destructor and the pure virtual method move.
 */
class ICreature {
protected:
    /**
     * This is the identifier of the creature.
     */
    int id;

public:
    /**
     * Virtual destructor.
     */
    virtual ~ICreature() {}

    /**
     * This is a pure virtual method that must be implemented by each
     * derived class. It moves the creature to the given position.
     *
     * @param x The new position of the creature.
     */
    virtual void move(int x) = 0;
};

#endif // ICREATURE_H