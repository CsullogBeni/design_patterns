#pragma once

#include <iostream>
#include "Phone.hpp"

/**
 * This class is a concrete product class that implements the
 * Abstract Factory design pattern. It creates an Apple Phone object.
 */
class ApplePhone : public Phone {
public:
    /**
     * Returns a string describing the phone action
     *
     * @return a string describing the phone action
     */
    std::string phoneAction() const override {
        return "I am an Apple Phone";
    }
};
