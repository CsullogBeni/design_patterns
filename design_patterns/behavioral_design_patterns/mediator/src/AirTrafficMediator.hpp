#pragma once

#include <iostream>
#include <memory>
#include <mutex>
#include <condition_variable>
#include "Mediator.hpp"


class Aircraft;

/**
 * @class AirTrafficMediator
 * @brief A concrete mediator class that implements the mediator interface and
 *        is responsible for managing the landing spots at an airport.
 *
 * This class is a concrete mediator class that implements the Mediator interface.
 * It is responsible for managing the landing spots at an airport. It has a
 * private field for the landing spots and a mutex and condition variable to
 * protect the critical section of the code. The class also provides two methods
 * that implement the mediator interface: RequestLanding and ReleaseLandingSpot.
 * The RequestLanding method is used by aircraft to request a landing spot at
 * the airport. The ReleaseLandingSpot is used by aircraft to release a landing
 * spot. The class also overrides the methods of the Mediator interface.
 */
class AirTrafficMediator : public Mediator
{
private:
    /**
     * @brief The maximum number of landing spots at the airport.
     *
     * This constant is used to specify the maximum number of landing spots at
     * the airport. It is used in the RequestLanding method to check if there is
     * a free landing spot available.
     */
    static const int MAX_AIRCRAFTS = 8;
    /**
     * @brief The number of landing spots at the airport.
     *
     * This field is used to keep track of the number of landing spots at the
     * airport. It is updated by the RequestLanding and ReleaseLandingSpot
     * methods.
     */
    int landingSpots = 0;
    /**
     * @brief A mutex to protect the critical section of the code.
     *
     * This mutex is used to protect the critical section of the code. It is
     * used to prevent multiple threads from accessing the landingSpots field
     * at the same time.
     */
    std::mutex mtx;
    /**
     * @brief A condition variable to notify other threads when a landing spot
     *        is released.
     *
     * This condition variable is used to notify other threads when a landing
     * spot is released. It is used in the ReleaseLandingSpot method to notify
     * other threads that a landing spot is available.
     */
    std::condition_variable cv;
public:
    /**
     * @brief A method that is used by aircraft to request a landing spot at
     *        the airport.
     *
     * This method is used by aircraft to request a landing spot at the airport.
     * It checks if there is a free landing spot available and if so, it
     * increments the landingSpots field and notifies other threads that a
     * landing spot is available.
     *
     * @param[in] aircraft The aircraft that is requesting a landing spot.
     */
    void RequestLanding(std::shared_ptr<Aircraft> aircraft) override;
    /**
     * @brief A method that is used by aircraft to release a landing spot at
     *        the airport.
     *
     * This method is used by aircraft to release a landing spot at the airport.
     * It decrements the landingSpots field and notifies other threads that a
     * landing spot is available.
     *
     * @param[in] aircraft The aircraft that is releasing a landing spot.
     */
    void ReleaseLandingSpot(std::shared_ptr<Aircraft> aircraft) override;
};
