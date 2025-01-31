#pragma once

#include <iostream>
#include <memory>
#include <chrono>
#include <thread>
#include "Mediator.hpp"
#include "Aircraft.hpp"


/**
 * @class Plane
 * @brief A concrete class that represents a plane.
 *
 * This class is a concrete class that represents a plane. It inherits from
 * Aircraft and enables shared ownership of its instances. It provides a
 * constructor to initialize the plane's id and mediator, and an Operate
 * method to simulate the operation of the plane.
 */
class Plane : public std::enable_shared_from_this<Plane>, public Aircraft
{
public:
    /**
     * @brief The constructor.
     *
     * The constructor is used to initialize the plane's id and mediator.
     * @param id The plane's id.
     * @param mediator A shared pointer to the mediator.
     */
    Plane(int id, std::shared_ptr<Mediator> mediator);

    /**
     * @brief Simulates the operation of the plane.
     *
     * The Operate method is used to simulate the operation of the plane.
     */
    void Operate() override;
};
