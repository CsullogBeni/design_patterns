#pragma once


/**
 * This is an abstract base class that defines the interface for all
 * classes that implement the Prototype design pattern. It has a pure
 * virtual destructor and a pure virtual method Clone that must be
 * implemented by each derived class. The Clone method is used to
 * create copies of objects.
 */
class Prototype
{
public:
    /**
     * This is a pure virtual method that must be implemented by each
     * derived class. It creates a copy of the object and returns a
     * pointer to the copy.
     *
     * @return A pointer to a copy of the object.
     */
    virtual Prototype *Clone() const = 0;
};

