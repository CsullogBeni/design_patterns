#ifndef PERSON_H
#define PERSON_H

#include "ICreature.hpp"
#include <string>
#include <iostream>

class Zombie;


using namespace std;

/**
 * This class represents a person. It is a derived class of
 * ICreature and implements the ICreature interface. It has a private
 * member variable name of type std::string, which is the name of the person.
 * It has a constructor that takes an int and a std::string as parameters and
 * initializes the id and name member variables. It has a virtual destructor
 * and overrides the move method of ICreature. It also has a method
 * attackZombie that takes a Zombie object as a parameter and attacks the
 * zombie.
 */
class Person : public ICreature
{
    private:
        std::string name;
    public:
        /**
         * Constructor.
         *
         * @param id The id of the person.
         * @param name The name of the person.
         */
        Person(int id, std::string name);
        /**
         * Virtual destructor.
         */
        virtual ~Person();

        /**
         * This method returns the name of the person.
         *
         * @return The name of the person.
         */
        std::string getName();

        /**
         * This method moves the person to the given position.
         *
         * @param x The new position of the person.
         */
        void move(int x) override;

        /**
         * This method attacks the given zombie.
         *
         * @param zombie The zombie to be attacked.
         */
        void attackZombie(Zombie zombie);
};

#endif // PERSON_H