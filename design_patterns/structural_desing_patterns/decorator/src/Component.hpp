#pragma once

#include <iostream>


/**
 * @class Component
 * @brief Component interface from decorator design pattern
 *
 * This is an interface for concrete components and decorators. It declares
 * an operation method that concrete components must implement and that
 * decorators can override.
 */
class Component {
public:
    /**
     * @brief Pure virtual method that must be implemented by each derived
     * class. It represents the operation that the concrete component must
     * perform.
     * @return The result of the operation.
     */
    virtual const std::string Operation() const = 0;

    /**
     * @brief Virtual destructor
     */
    virtual ~Component() {};
};
