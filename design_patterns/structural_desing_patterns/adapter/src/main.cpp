#include "MapApplication.hpp"
#include "KilometerToMilesAdapter.hpp"
#include "RouteTimeCalculator.hpp"


/**
 * @brief Example of Adapter Design Pattern
 *
 * This example shows how to use the Adapter Pattern to convert
 * a RouteTimeCalculator object into a MapApplication object.
 *
 * The RouteTimeCalculator is an object that calculates the time
 * it takes to travel a certain distance in miles. The MapApplication
 * is an object that takes a distance in kilometers and returns the
 * time it takes to travel that distance in hours.
 *
 * The KilometerToMilesAdapter is an object that adapts the
 * RouteTimeCalculator to the MapApplication, allowing the
 * MapApplication to use the RouteTimeCalculator to calculate
 * the time it takes to travel a certain distance in kilometers.
 */
int main(){

    RouteTimeCalculator* routeTimeCalculator = new RouteTimeCalculator();
    KilometerToMilesAdapter* kilometerToMilesAdapter = new KilometerToMilesAdapter(routeTimeCalculator);
    MapApplication* mapApplication = new MapApplication("Tampa", "Clearwater", 35.52, kilometerToMilesAdapter);

    mapApplication->PrintInfo();

    delete routeTimeCalculator;
    delete kilometerToMilesAdapter;
    delete mapApplication;

    return 0;
}