#pragma once

#include <iostream>
#include "Level.hpp"
#include "Elavator.hpp"


class GroundFloor : public Level {
public:

    GroundFloor() { std::cout << "Ground floor\n"; }

    void TransitionToGarage(Elavator* elavator) override;
    void TransitionToGroundFloor(Elavator* elavator) override;
    void TransitionToFirstFloor(Elavator* elavator) override;
};
