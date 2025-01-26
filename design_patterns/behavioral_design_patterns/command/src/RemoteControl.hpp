#pragma once

#include "Command.hpp"


/**
 * @class RemoteControl
 * @brief This class represents a remote control for executing commands.
 *
 * This class is a simple example of the Command design pattern. It holds a
 * reference to a Command object and provides a method to execute the command.
 * Represents an invoker for the service classes throuh the concrete commands.
 */
class RemoteControl
{
private:
    /**
     * @brief The command to be executed.
     */
    Command *command;

public:
    RemoteControl(Command *command) : command(command) {}
    /**
     * @brief Sets the command to be executed.
     * @param command The command to be executed.
     */
    void SetCommand(Command *command) { this->command = command; }
    /**
     * @brief Executes the command set by SetCommand.
     */
    void ExecuteCommand() { command->Execute(); }
};
