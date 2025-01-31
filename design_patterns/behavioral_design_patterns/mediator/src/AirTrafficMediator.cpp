#include "AirTrafficMediator.hpp"


void AirTrafficMediator::RequestLanding(std::shared_ptr<Aircraft> aircraft) {
    std::unique_lock<std::mutex> lock(mtx);
    cv.wait(lock, [this]() { return landingSpots < MAX_AIRCRAFTS; });

    landingSpots++;
    std::cout << "Aircraft " << aircraft->GetId() << " has landed. Available spots: "
              << MAX_AIRCRAFTS - landingSpots << "\n";
}


void AirTrafficMediator::ReleaseLandingSpot(std::shared_ptr<Aircraft> aircraft) {
    std::lock_guard<std::mutex> lock(mtx);
    landingSpots--;
    std::cout << "Aircraft " << aircraft->GetId() << " has taken off. Available spots: "
              << MAX_AIRCRAFTS - landingSpots << "\n";
    cv.notify_one();
}

