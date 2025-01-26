#pragma once

#include "Command.hpp"
#include "Lights.hpp"


/**
 * @class TurnOffLightsCommand
 * @brief A concrete command that turns off the lights.
 *
 * This class is a concrete command that turns off the lights.
 */
class TurnOffLightsCommand : public Command
{
private:
    /**
     * @brief The lights to be turned off.
     */
    Lights *lights;

public:
    /**
     * @brief Constructor.
     * @param lights The lights to be turned off.
     *
     * This constructor creates a new TurnOffLightsCommand object.
     */
    TurnOffLightsCommand(Lights *lights) : lights(lights) {}
    
    /**
     * @brief Execute the command.
     *
     * This method turns off the lights.
     */
    void Execute() override { lights->TurnOff(); }
};