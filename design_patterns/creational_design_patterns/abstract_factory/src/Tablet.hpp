#pragma once

#include <iostream>


class Tablet {
public:
    virtual ~Tablet() {};
    virtual std::string tabletAction() const = 0;
};