#pragma once

#include <iostream>
#include "Prototype.hpp"
#include "Equipment.hpp"


/**
 * @brief Represents a Warrior in the game.
 *
 * The Warrior class is a prototype class that can be cloned to create copies of itself.
 * It contains attributes such as strength and equipment, and provides methods to fight.
 */
class Warrior : public Prototype
{
private:
    /** The strength of the warrior */
    int strength; 

    /** Pointer to the equipment used by the warrior */
    Equipment *equipment; 
public:
    /**
     * @brief Default constructor for the Warrior class.
     *
     * Initializes a warrior with default strength and equipment.
     */
    Warrior() {strength = 100; equipment = new Equipment();};

    /**
     * @brief Copy constructor for the Warrior class.
     *
     * Creates a new Warrior instance by copying the strength and equipment from another Warrior.
     *
     * @param other The Warrior instance to copy from.
     */
    Warrior(const Warrior &other) {strength = other.strength; equipment = other.equipment->Clone();};

    /**
     * @brief Destructor for the Warrior class.
     */
    ~Warrior() {
        delete equipment;
    };

    /**
     * @brief Clones the Warrior object.
     *
     * Creates a copy of the current Warrior object.
     *
     * @return A pointer to the cloned Warrior object.
     */
    Warrior *Clone() const override {return new Warrior(*this);};

    /**
     * @brief Makes the Warrior fight.
     *
     * Prints a message if the warrior has both armor and sword.
     */
    void Fight() const {if (equipment->GetArmor() && equipment->GetSword()) std::cout << "I am fighting with my sword and my armor." << std::endl;};
};
