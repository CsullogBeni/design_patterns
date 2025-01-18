#pragma once


/**
 * This is an abstract base class that defines the interface for all
 * classes that implement the Builder design pattern. It has a pure
 * virtual destructor and a pure virtual method Reset that must be
 * implemented by each derived class. The Reset method is used to
 * reset the builder to its initial state.
 */
class Builder
{
public:
    /**
     * Virtual destructor.
     */
    virtual ~Builder() {}

    /**
     * This is a pure virtual method that must be implemented by each
     * derived class. It resets the builder to its initial state.
     */
    virtual void Reset() = 0;
};

