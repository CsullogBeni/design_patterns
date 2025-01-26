#pragma once

#include <iostream>


/**
 * @class Heater
 * @brief A class representing a heater.
 *
 * This class allows you to control a heater. It provides two methods: TurnOn and
 * TurnOff. The TurnOn method is used to turn the heater on at a specified
 * temperature in degrees Celsius. The TurnOff method is used to turn the heater
 * off.
 */
class Heater
{
public:
    /**
     * @brief Turns the heater on at a specified temperature.
     * @param temperature The temperature at which to turn the heater on, in
     *        degrees Celsius. The value must be in the range 0 to 100.
     */
    void TurnOn(int temperature) { if (temperature > 0 && temperature <= 100) std::cout << "Heater turned on at " << temperature << "°C" << std::endl; }
    /**
     * @brief Turns the heater off.
     */
    void TurnOff() { std::cout << "Heater turned off" << std::endl; }
};

