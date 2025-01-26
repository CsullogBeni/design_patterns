#pragma once


/**
 * @class Command
 * @brief An interface for all commands
 *
 * This interface is used for all commands. It contains one abstract method: Execute.
 */
class Command
{
public:
    /**
     * @brief Execute the command
     *
     * This method is used to execute the command.
     */
    virtual void Execute() = 0;
};
