#pragma once

#include "ToolFactory.hpp"
#include "SamsungPhone.hpp"
#include "SamsungTablet.hpp"


/**
 * This class is a concrete factory class that implements the
 * Abstract Factory design pattern. It creates a Samsung Tablet object.
 */
class SamsungToolFactory : public ToolFactory {
public:
    /**
     * This is an abstract method that must be implemented by each derived
     * class. It creates Tablet and Phone object.
     *
     * @return A pointer to a Tablet object.
     */
    Tablet *CreateTablet() const override {
        return new SamsungTablet();
    }

    /**
     * This is an abstract method that must be implemented by each derived
     * class. It creates a Phone object.
     *
     * @return A pointer to a Phone object.
     */
    Phone *CreatePhone() const override {
        return new SamsungPhone();
    }
};