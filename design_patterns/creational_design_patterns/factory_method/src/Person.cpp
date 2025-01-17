#include "Person.hpp"
#include "Zombie.hpp"

using namespace std;

/**
 * Constructor for the Person class.
 * 
 * @param id The id of the person.
 * @param name The name of the person.
 */
Person::Person(int id, std::string name) {
    this->id = id;
    this->name = name;
}

/**
 * Destructor for the Person class.
 */
Person::~Person() {}

/**
 * Gets the name of the person.
 * 
 * @return The name of the person.
 */
std::string Person::getName() {
    return name;
}

/**
 * Moves the person to the given position.
 * 
 * @param x The new position of the person.
 */
void Person::move(int x) {
    std::cout << "Person " << id << " is moving to position " << x << std::endl;
}

/**
 * Attacks the given zombie.
 * 
 * @param zombie The zombie to be attacked.
 */
void Person::attackZombie(Zombie zombie) {
    std::cout << "Person " << id << " is attacking zombie " << zombie.getId() << std::endl;
}
