#pragma once

#include "Tablet.hpp"
#include "Phone.hpp"


/**
 * This is an abstract factory class that implements the Abstract Factory
 * design pattern. It provides methods to create objects of classes Tablet and
 * Phone.
 */
class ToolFactory {
public:
    virtual ~ToolFactory() {};
    /**
     * This is an abstract method that must be implemented by each derived
     * class. It creates a Tablet object.
     *
     * @return A pointer to a Tablet object.
     */
    virtual Tablet *CreateTablet() const = 0;
    /**
     * This is an abstract method that must be implemented by each derived
     * class. It creates a Phone object.
     *
     * @return A pointer to a Phone object.
     */
    virtual Phone *CreatePhone() const = 0;
};
