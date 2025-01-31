#pragma once

#include <memory>

class Mediator;


/**
 * @class Aircraft
 * @brief An interface for all aircraft in the air traffic control system
 *
 * This class provides an interface for all aircraft in the air traffic control
 * system. It contains a protected field for the aircraft's id and a shared
 * pointer to the mediator. The class also contains two methods: Operate and
 * GetId. The Operate method is a pure virtual method that must be implemented
 * by all concrete aircraft classes. The GetId method is used to get the
 * aircraft's id.
 */
class Aircraft 
{
protected:
    /**
     * @brief The aircraft's id
     */
    int id;
    /**
     * @brief A shared pointer to the mediator
     */
    std::shared_ptr<Mediator> mediator;

public:
    /**
     * @brief A pure virtual method that must be implemented by all concrete
     *        aircraft classes
     */
    virtual void Operate() = 0;

    /**
     * @brief A method to get the aircraft's id
     * @return The aircraft's id
     */
    int GetId() const { return id; }
};
