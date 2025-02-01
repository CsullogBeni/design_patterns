#pragma once

#include "Level.hpp"


/**
 * @class Elavator
 * @brief Represents an elevator that can transition between different levels.
 *
 * This class encapsulates an elevator that can transition to different levels,
 * such as garage, ground floor, and first floor. It holds a pointer to the current
 * level and provides transition methods to change levels.
 */
class Elavator
{
private:
    /**< Pointer to the current level of the elevator. */
    Level* level; 

public:
    /**
     * @brief Constructor to initialize the elevator with a specific level.
     * @param level A pointer to the initial level of the elevator.
     */
    Elavator(Level* level) : level(level) {}

    /**
     * @brief Default destructor.
     */
    ~Elavator() = default;

    /**
     * @brief Transition the elevator to the garage level.
     */
    void TransitionToGarage() { level->TransitionToGarage(this); }

    /**
     * @brief Transition the elevator to the ground floor level.
     */
    void TransitionToGroundFloor() { level->TransitionToGroundFloor(this); }

    /**
     * @brief Transition the elevator to the first floor level.
     */
    void TransitionToFirstFloor() { level->TransitionToFirstFloor(this); }

    /**
     * @brief Set the current level of the elevator.
     * @param level A pointer to the new level of the elevator.
     */
    void SetLevel(Level* level) { this->level = level; }
};
