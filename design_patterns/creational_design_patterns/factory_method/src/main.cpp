#include <iostream>
#include "Creator.hpp"
#include "Person.hpp"
#include "Zombie.hpp"
#include "PersonCreator.hpp"
#include "ZombieCreator.hpp"


int main() {
    /**
      * The main function demonstrates the use of the factory method pattern.
      * It creates a `Person` and a `Zombie` using their respective creators.
      * The function performs actions with these objects, such as moving them
      * and outputting their names/IDs. It also demonstrates interactions between
      * the `Person` and the `Zombie` by invoking attack methods. Proper cleanup
      * of dynamically allocated objects is performed at the end.
     */
    Creator* creator = new PersonCreator();
    ICreature* person = creator->create();
    Person* p = dynamic_cast<Person*>(person);
    if (p == nullptr) {
        throw std::runtime_error("dynamic_cast failed");
    }
    p->move(10);
    std::cout << p->getName() << std::endl;
    delete creator;

    creator = new ZombieCreator();
    ICreature* zombie = creator->create();
    Zombie* z = dynamic_cast<Zombie*>(zombie);
    if (z == nullptr) {
        throw std::runtime_error("dynamic_cast failed");
    }
    z->move(10);
    std::cout << z->getId() << std::endl;
    delete creator;

    p->attackZombie(*z);
    z->attackPerson(*p);

    delete person;
    delete zombie;
    return 0;
}
