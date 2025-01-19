#include "MapApplication.hpp"


/**
 * @brief Constructor.
 * @param startLoc The start location of the route.
 * @param endLoc The end location of the route.
 * @param kilometerDisctance The distance of the route in kilometers.
 * @param adapter A pointer to an AdapterInterface object that is used to calculate the travel time.
 */
MapApplication::MapApplication(std::string startLoc, std::string endLoc, float kilometerDisctance, AdapterInterface* adapter){
    this->startLoc = startLoc;
    this->endLoc = endLoc;
    this->kilometerDisctance = kilometerDisctance;
    this->adapter = adapter;
}

/**
 * @brief Get the start location.
 * @return The start location.
 */
std::string MapApplication::GetStartLoc() const {
    return startLoc;
}

/**
 * @brief Get the end location.
 * @return The end location.
 */
std::string MapApplication::GetEndLoc() const {
    return endLoc;
}

/**
 * @brief Get the distance of the route in kilometers.
 * @return The distance of the route in kilometers.
 */
float MapApplication::GetRouteTime() const {
    return adapter->GetTime(kilometerDisctance);
}

/**
 * @brief Print the information of the map application.
 */
void MapApplication::PrintInfo() const {
    std::cout << "Start location: " << GetStartLoc() << std::endl;
    std::cout << "End location: " << GetEndLoc() << std::endl;
    std::cout << "Time in hour: " << GetRouteTime() << std::endl;
}

