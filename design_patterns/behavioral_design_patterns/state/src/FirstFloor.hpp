#pragma once

#include <iostream>
#include "Level.hpp"
#include "Elavator.hpp"


class FirstFloor : public Level {
public:

    FirstFloor() { std::cout << "First floor\n"; }

    void TransitionToGarage(Elavator* elavator) override;
    void TransitionToGroundFloor(Elavator* elavator) override;
    void TransitionToFirstFloor(Elavator* elavator) override;
};
