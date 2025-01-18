#pragma once

#include "ToolFactory.hpp"
#include "ApplePhone.hpp"
#include "AppleTablet.hpp"


/**
 * This class is a concrete factory class that implements the
 * Abstract Factory design pattern. It creates Apple Tablet and Phone object.
 */
class AppleToolFactory : public ToolFactory {
public:
    /**
     * This is an abstract method that must be implemented by each derived
     * class. It creates a Tablet object.
     *
     * @return A pointer to a Tablet object.
     */
    Tablet *CreateTablet() const override {
        return new AppleTablet();
    }

    /**
     * This is an abstract method that must be implemented by each derived  
     * class. It creates a Phone object.
     *
     * @return A pointer to a Phone object.
     */
    Phone *CreatePhone() const override {
        return new ApplePhone();
    }
};
