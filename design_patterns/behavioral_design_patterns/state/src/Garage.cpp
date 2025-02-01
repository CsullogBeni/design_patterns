#include "Garage.hpp"
#include "FirstFloor.hpp"
#include "GroundFloor.hpp"
#include "Elavator.hpp"


void Garage::TransitionToGarage(Elavator* elavator) { std::cout << "Already on garage\n"; }

void Garage::TransitionToGroundFloor(Elavator* elavator) { elavator->SetLevel(new GroundFloor()); delete this; }

void Garage::TransitionToFirstFloor(Elavator* elavator) { elavator->SetLevel(new FirstFloor()); delete this; }
