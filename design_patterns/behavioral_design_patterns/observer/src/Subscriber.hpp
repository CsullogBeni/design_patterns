#pragma once

#include <iostream>


/**
 * @class Subscriber
 * @brief An abstract class representing a subscriber in the Observer design pattern.
 *
 * This class provides an interface for subscribers to implement the update method,
 * which will be called by the subject to notify the subscriber of any changes.
 */
class Subscriber 
{
public:
    /**
     * @brief Update method to be implemented by concrete subscribers.
     *
     * This pure virtual method is called by the subject to notify the subscriber
     * of any changes. Concrete subscribers must implement this method to handle
     * the update.
     * 
     * @param message The message to be updated.
     */
    virtual void Update(const std::string& message) = 0;
};
