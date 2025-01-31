#pragma once

#include "Aircraft.hpp"


/**
 * @class Mediator
 * @brief Mediator interface for the Air Traffic Control system.
 *
 * This interface defines the methods that a concrete mediator must implement
 * to manage the landing spots at an airport. The RequestLanding method is used
 * by aircraft to request a landing spot at the airport. The ReleaseLandingSpot
 * method is used by aircraft to release a landing spot.
 */
class Mediator
{
public:
    /**
     * @brief Request a landing spot at the airport.
     *
     * This method is used by aircraft to request a landing spot at the airport.
     * The method will wait until a landing spot is available and then assign
     * the landing spot to the aircraft.
     *
     * @param unit The aircraft requesting the landing spot.
     */
    virtual void RequestLanding(std::shared_ptr<Aircraft> unit) = 0;

    /**
     * @brief Release a landing spot at the airport.
     *
     * This method is used by aircraft to release a landing spot at the airport.
     * The method will notify other aircraft that a landing spot is available.
     *
     * @param unit The aircraft releasing the landing spot.
     */
    virtual void ReleaseLandingSpot(std::shared_ptr<Aircraft> unit) = 0;
};
