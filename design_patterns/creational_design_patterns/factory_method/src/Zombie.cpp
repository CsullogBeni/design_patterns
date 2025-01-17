#include "Zombie.hpp"
#include "Person.hpp"
#include <iostream>

using namespace std;

/**
 * Constructor for the Zombie class.
 *
 * @param id The id of the zombie.
 */
Zombie::Zombie(int id) 
{
    this->id = id;
}

/**
 * Destructor for the Zombie class.
 */
Zombie::~Zombie()
{
}

/**
 * Gets the id of the zombie.
 *
 * @return The id of the zombie.
 */
int Zombie::getId() {
    return id;
}

/**
 * Moves the zombie to the given position.
 *
 * @param x The new position of the zombie.
 */
void Zombie::move(int x) {
    std::cout << "Zombie " << id << " is moving to position " << x << std::endl;
}

/**
 * Attacks the given person.
 *
 * @param person The person to be attacked.
 */
void Zombie::attackPerson(Person person) {
    std::cout << "Zombie " << id << " is attacking person " << person.getName() << std::endl;
}
