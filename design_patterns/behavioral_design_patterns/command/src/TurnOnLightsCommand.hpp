#pragma once

#include "Command.hpp"
#include "Lights.hpp"


/**
 * @class TurnOnLightsCommand
 * @brief A concrete command that turns on the lights with a specified level.
 *
 * This class is a concrete command that turns on the lights with a specified level.
 * The level must be in the range 0 to 100.
 */
class TurnOnLightsCommand : public Command
{
private:
    /**
     * @brief The lights to be turned on.
     */
    Lights *lights;

    /**
     * @brief The level of the lights.
     */
    int level;

public:
    /**
     * @brief Constructor.
     * @param lights The lights to be turned on.
     * @param level The level of the lights.
     *
     * This constructor creates a new TurnOnLightsCommand object.
     */
    TurnOnLightsCommand(Lights *lights, int level) : lights(lights), level(level) {}

    /**
     * @brief Execute the command.
     *
     * This method turns on the lights with the specified level.
     */
    void Execute() override { lights->TurnOn(level); }
};

