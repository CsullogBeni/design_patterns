#include "Garage.hpp"
#include "FirstFloor.hpp"
#include "GroundFloor.hpp"
#include "Elavator.hpp"


void FirstFloor::TransitionToGarage(Elavator* elavator) { elavator->SetLevel(new Garage()); delete this; }

void FirstFloor::TransitionToGroundFloor(Elavator* elavator) { elavator->SetLevel(new GroundFloor()); delete this; }

void FirstFloor::TransitionToFirstFloor(Elavator* elavator) { std::cout << "Already on first floor\n"; }
