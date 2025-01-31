#pragma once

#include <iostream>
#include <memory>
#include <chrono>
#include <thread>
#include "Mediator.hpp"
#include "Aircraft.hpp"


/**
 * @class Helicopter
 * @brief A concrete class that represents a helicopter.
 *
 * This class is a concrete class that represents a helicopter. It provides a
 * constructor, a destructor and an Operate method. The constructor is used to
 * initialize the helicopter's id and mediator. The destructor is the default
 * one. The Operate method is used to simulate the operation of the helicopter.
 */
class Helicopter : public std::enable_shared_from_this<Helicopter>, public Aircraft
{
public:
    /**
     * @brief The constructor.
     *
     * The constructor is used to initialize the helicopter's id and mediator.
     * @param id The helicopter's id.
     * @param mediator A shared pointer to the mediator.
     */
    Helicopter(int id, std::shared_ptr<Mediator> mediator);

    /**
     * @brief The destructor.
     *
     * The destructor is the default one.
     */
    virtual ~Helicopter() = default;

    /**
     * @brief Simulates the operation of the helicopter.
     *
     * The Operate method is used to simulate the operation of the helicopter.
     */
    void Operate() override;
};

