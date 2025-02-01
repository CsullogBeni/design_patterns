#pragma once

#include <iostream>
#include "Level.hpp"
#include "Elavator.hpp"


class Garage : public Level {
public:

    Garage() {std::cout << "Garage\n"; }

    void TransitionToGarage(Elavator* elavator) override;
    void TransitionToGroundFloor(Elavator* elavator) override;
    void TransitionToFirstFloor(Elavator* elavator) override;
};
