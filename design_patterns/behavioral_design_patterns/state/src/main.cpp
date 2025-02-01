#include <iostream>

#include "Elavator.hpp"
#include "Garage.hpp"
#include "GroundFloor.hpp"
#include "FirstFloor.hpp"


int main() {
    
    Elavator elavator = Elavator(new GroundFloor());
    elavator.TransitionToGarage();
    elavator.TransitionToGroundFloor();
    elavator.TransitionToFirstFloor();
    elavator.TransitionToFirstFloor();
    elavator.TransitionToGarage();

    return 0;
}
