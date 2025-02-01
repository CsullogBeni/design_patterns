#pragma once


class Elavator;

/**
 * @class Level
 * @brief Abstract base class for all elevator levels.
 *
 * This class is an abstract base class for all elevator levels. It provides
 * methods to transition to other elevator levels. The TransitionToGarage,
 * TransitionToGroundFloor, and TransitionToFirstFloor methods are pure virtual
 * methods that must be implemented by derived classes.
 */
class Level
{
public:
    /**
     * @brief Transition to garage.
     *
     * This is a pure virtual method that must be implemented by derived classes.
     */
    virtual void TransitionToGarage(Elavator* elavator) = 0;

    /**
     * @brief Transition to ground floor.
     *
     * This is a pure virtual method that must be implemented by derived classes.
     */
    virtual void TransitionToGroundFloor(Elavator* elavator) = 0;

    /**
     * @brief Transition to first floor.
     *
     * This is a pure virtual method that must be implemented by derived classes.
     */
    virtual void TransitionToFirstFloor(Elavator* elavator) = 0;
};