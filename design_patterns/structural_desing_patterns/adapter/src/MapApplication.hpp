#pragma once

#include <iostream>
#include "AdapterInterface.hpp"


/**
 * @class MapApplication
 * @brief Represents a map application that uses an adapter to get the travel time.
 *
 * This class encapsulates a map application with a start location, an end location,
 * a distance in kilometers and an adapter to get the travel time. It provides
 * methods to get the start location, the end location, the distance and the travel
 * time. It also provides a method to print the information of the map application.
 */
class MapApplication {
private:

    /// The start location of the route.
    std::string startLoc;

    /// The end location of the route.
    std::string endLoc;

    /// The distance of the route in kilometers.
    float kilometerDisctance;

    /// A pointer to an AdapterInterface object that is used to calculate the travel time.
    AdapterInterface* adapter;

public:

    /**
     * @brief Constructor.
     * @param startLoc The start location of the route.
     * @param endLoc The end location of the route.
     * @param kilometerDisctance The distance of the route in kilometers.
     * @param adapter A pointer to an AdapterInterface object that is used to calculate the travel time.
     */
    MapApplication(std::string startLoc, std::string endLoc, float kilometerDisctance, AdapterInterface* adapter);

    /// @brief Get the start location.
    /// @return The start location.
    std::string GetStartLoc() const;

    /// @brief Get the end location.
    /// @return The end location.
    std::string GetEndLoc() const;

    /// @brief Get the distance of the route in kilometers.
    /// @return The distance of the route in kilometers.
    float GetRouteTime() const;

    /// @brief Print the information of the map application.
    void PrintInfo() const;
};
