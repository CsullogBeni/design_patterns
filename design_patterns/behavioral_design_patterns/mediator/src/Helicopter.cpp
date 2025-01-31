#include "Helicopter.hpp"


Helicopter::Helicopter(int id, std::shared_ptr<Mediator> mediator) 
{
    this->id = id;
    this->mediator = mediator;
}

void Helicopter::Operate() 
{
    while (true) {
            std::cout << "Helicopter " << id << " is requesting landing.\n";
            mediator->RequestLanding(shared_from_this());

            std::this_thread::sleep_for(std::chrono::seconds(2));

            mediator->ReleaseLandingSpot(shared_from_this());
            break;
        }
}
