#pragma once

#include "Command.hpp"
#include "Heater.hpp"


/**
 * @class TurnOnHeatingCommand
 * @brief A concrete command that turns on the heating system.
 *
 * This class is a concrete command that turns on the heating system.
 */
class TurnOnHeatingCommand : public Command
{
private:
    /**
     * @brief The heater to be turned on.
     */
    Heater *heater;

    /**
     * @brief The temperature at which to turn on the heating system.
     */
    int temperature;

public:
    /**
     * @brief Constructor.
     * @param heater The heater to be turned on.
     * @param temperature The temperature at which to turn on the heating system.
     */
    TurnOnHeatingCommand(Heater *heater, int temperature) : heater(heater), temperature(temperature) {}

    /**
     * @brief Execute the command.
     *
     * This method turns on the heating system at the specified temperature.
     */
    void Execute() override { heater->TurnOn(temperature); }
};