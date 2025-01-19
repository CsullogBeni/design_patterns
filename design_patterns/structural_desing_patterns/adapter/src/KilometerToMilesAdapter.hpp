#pragma once

#include "AdapterInterface.hpp"
#include "RouteTimeCalculator.hpp"


/**
 * @class KilometerToMilesAdapter
 * @brief Adapter class to convert kilometer distances to miles for route time calculation.
 *
 * This class implements the AdapterInterface to convert a distance in kilometers
 * to miles using the RouteTimeCalculator. It adapts the interface for calculating
 * travel time based on kilometer distances.
 */
class KilometerToMilesAdapter : public AdapterInterface {
private:
    /**
     * @brief Pointer to a RouteTimeCalculator object.
     */
    RouteTimeCalculator* routeTimeCalculator;
public:
    /**
     * @brief Constructor for KilometerToMilesAdapter.
     * @param routeTimeCalculator Pointer to a RouteTimeCalculator object.
     */
    KilometerToMilesAdapter(RouteTimeCalculator* routeTimeCalculator);

    /**
     * @brief Calculate the travel time for a given distance in kilometers.
     * @param kilometerDisctance The distance in kilometers.
     * @return The time required to travel the specified distance.
     */
    float GetTime(float kilometerDisctance) override;
};
