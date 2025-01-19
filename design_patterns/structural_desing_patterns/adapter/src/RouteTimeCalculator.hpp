#pragma once


/**
 * @class RouteTimeCalculator
 * @brief Calculate the time that a car takes to make a route.
 */
class RouteTimeCalculator
{
private:
    /**
     * @brief The distance of the route in miles.
     */
    float miles;
public:

    /**
     * @brief Constructor.
     */
    RouteTimeCalculator() {}

    /**
     * @brief Constructor.
     * @param miles The distance of the route in miles.
     */
    RouteTimeCalculator(float miles) : miles(miles) {}

    /**
     * @brief Set the distance of the route in miles.
     * @param miles The distance of the route in miles.
     */
    void SetMiles(float miles) {this->miles = miles;}

    /**
     * @brief Calculate the time that the car takes to make the route.
     * @return The time in hours.
     * @details This function expects that the car goes with 60 miles per hour.
     */
    float const CalculateTime() {return miles / 60.0;}
};
