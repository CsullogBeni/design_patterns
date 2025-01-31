#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
#include <condition_variable>
#include <memory>
#include <chrono>

#include "AirTrafficMediator.hpp"
#include "Helicopter.hpp"
#include "Plane.hpp"


/**
 * @brief Main function to create a mediator and aircrafts and start threads for them to operate
 *
 * This function creates a mediator and 12 aircrafts (6 helicopters and 6 planes) and starts
 * threads for them to operate. It joins all threads and returns 0.
 */
int main() {
    auto mediator = std::make_shared<AirTrafficMediator>();
    const int NUM_AIRCRAFTS = 12;

    std::vector<std::thread> threads;

    for (int i = 0; i < NUM_AIRCRAFTS; i = i + 2) {
        auto helicopter = std::make_shared<Helicopter>(i + 1, mediator);
        auto plane = std::make_shared<Plane>(i + 2, mediator);
        threads.emplace_back(&Helicopter::Operate, helicopter);
        threads.emplace_back(&Plane::Operate, plane);
    }

    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}
