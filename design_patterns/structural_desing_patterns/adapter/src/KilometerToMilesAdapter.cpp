#include "KilometerToMilesAdapter.hpp"


/**
 * @brief Constructor for KilometerToMilesAdapter.
 * @param routeTimeCalculator Pointer to a RouteTimeCalculator object.
 */
KilometerToMilesAdapter::KilometerToMilesAdapter(RouteTimeCalculator* routeTimeCalculator) {
    this->routeTimeCalculator = routeTimeCalculator;
}

/**
 * @brief Calculate the travel time for a given distance in kilometers.
 * @param kilometerDisctance The distance in kilometers.
 * @return The time required to travel the specified distance.
 */
float KilometerToMilesAdapter::GetTime(float kilometerDisctance) {
    this->routeTimeCalculator->SetMiles(kilometerDisctance / 1.60934);
    return routeTimeCalculator->CalculateTime();
}
