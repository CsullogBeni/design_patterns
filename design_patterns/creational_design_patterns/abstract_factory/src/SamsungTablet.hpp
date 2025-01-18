#pragma once

#include <iostream>
#include "Tablet.hpp"

/**
 * This class is a concrete product class that implements the
 * Abstract Factory design pattern. It creates a Samsung Tablet object.
 */
class SamsungTablet : public Tablet {
public:
    /**
     * Returns a string describing the tablet action
     *
     * @return a string describing the tablet action
     */
    std::string tabletAction() const override {
        return "I am a Samsung Tablet";
    }
};