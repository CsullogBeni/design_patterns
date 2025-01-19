#pragma once

#include "Prototype.hpp"


/**
 * @brief A class that represents a piece of equipment in the game.
 *
 * This class encapsulates a piece of equipment with a boolean value
 * indicating whether the equipment is an armor or a sword.
 */
class Equipment : public Prototype
{
private:
    /** Indicates whether the equipment is an armor */
    bool armor; 

    /** Indicates whether the equipment is a sword */
    bool sword; 

public:
    /**
     * @brief Constructor for the Equipment class
     *
     * This constructor initializes the equipment to be an armor and a sword.
     */
    Equipment() {armor = true; sword = true;};

    /**
     * @brief Copy constructor for the Equipment class
     *
     * This constructor creates a new Equipment instance by copying the
     * armor and sword values from another Equipment instance.
     *
     * @param other The Equipment instance to copy from.
     */
    Equipment(const Equipment& other) {
        armor = other.armor;
        sword = other.sword;
    }

    /**
     * @brief Destructor for the Equipment class
     */
    ~Equipment();

    /**
     * @brief Getter method for the armor value
     *
     * @return A boolean value indicating whether the equipment is an armor
     */
    bool GetArmor() {return armor;};

    /**
     * @brief Getter method for the sword value
     *
     * @return A boolean value indicating whether the equipment is a sword
     */
    bool GetSword() {return sword;};

    /**
     * @brief Setter method for the armor value
     *
     * @param armor A boolean value indicating whether the equipment is an armor
     */
    void SetArmor(bool armor) {this->armor = armor;};

    /**
     * @brief Setter method for the sword value
     *
     * @param sword A boolean value indicating whether the equipment is a sword
     */
    void SetSword(bool sword) {this->sword = sword;};

    /**
     * @brief Clones the current Equipment instance
     *
     * @return A pointer to a new Equipment instance
     */
    Equipment *Clone() const override {return new Equipment(*this);}
};

