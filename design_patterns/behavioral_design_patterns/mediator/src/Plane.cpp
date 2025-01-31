#include "Plane.hpp"


Plane::Plane(int id, std::shared_ptr<Mediator> mediator) 
{
    this->id = id;
    this->mediator = mediator;
}

void Plane::Operate() 
{
    while (true) {
            std::cout << "Plane " << id << " is requesting landing.\n";
            mediator->RequestLanding(shared_from_this());

            std::this_thread::sleep_for(std::chrono::seconds(6));

            mediator->ReleaseLandingSpot(shared_from_this());
            break;
        }
}
