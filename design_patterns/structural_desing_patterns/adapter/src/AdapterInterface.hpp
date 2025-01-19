#pragma once


/**
 * @class AdapterInterface
 * @brief Interface for calculating time based on distance.
 *
 * This interface defines a method to calculate the time 
 * required to travel a specified distance in kilometers.
 */
class AdapterInterface {
public:

    /**
     * @brief Calculate the travel time for a given distance.
     * @param kilometerDisctance The distance in kilometers.
     * @return The time required to travel the specified distance.
     */
    virtual float GetTime(float kilometerDisctance) = 0;
};
