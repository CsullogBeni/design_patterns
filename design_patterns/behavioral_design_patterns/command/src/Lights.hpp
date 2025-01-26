#pragma once

#include <iostream>


/**
 * @class Lights
 * @brief A class that represents a set of lights.
 *
 * This class allows you to control the state of the lights. It provides two
 * methods: TurnOn, which turns the lights on at a specified level, and TurnOff,
 * which turns the lights off.
 */
class Lights
{
public:
    /**
     * @brief Turns the lights on at a specified level.
     * @param level the level at which to turn the lights on. The value must be
     *              in the range 0 to 100.
     */
    void TurnOn(int level) { if (level > 0 && level <= 100) std::cout << "Lights on at level " << level << "\n"; }
    /**
     * @brief Turns the lights off.
     */
    void TurnOff() { std::cout << "Lights off\n"; }
};
