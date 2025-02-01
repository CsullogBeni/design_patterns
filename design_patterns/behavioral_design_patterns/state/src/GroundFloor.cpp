#include "Garage.hpp"
#include "FirstFloor.hpp"
#include "GroundFloor.hpp"
#include "Elavator.hpp"


void GroundFloor::TransitionToGarage(Elavator* elavator) { elavator->SetLevel(new Garage()); delete this; }

void GroundFloor::TransitionToGroundFloor(Elavator* elavator) { std::cout << "Already on ground floor\n"; }

void GroundFloor::TransitionToFirstFloor(Elavator* elavator) { elavator->SetLevel(new FirstFloor()); delete this; }
