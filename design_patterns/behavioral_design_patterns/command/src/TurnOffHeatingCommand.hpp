#pragma once

#include "Command.hpp"
#include "Heater.hpp"


/**
 * @class TurnOffHeatingCommand
 * @brief A concrete command that turns off the heating system.
 *
 * This class is a concrete command that turns off the heating system.
 */
class TurnOffHeatingCommand : public Command
{
private:
    /**
     * @brief The heater to be turned off.
     */
    Heater *heater;

public:
    /**
     * @brief Constructor.
     * @param heater The heater to be turned off.
     *
     * This constructor creates a new TurnOffHeatingCommand object.
     */
    TurnOffHeatingCommand(Heater *heater) : heater(heater) {}

    /**
     * @brief Execute the command.
     *
     * This method turns off the heating system.
     */
    void Execute() override { heater->TurnOff(); }
};