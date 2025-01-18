#pragma once

#include <iostream>


class Phone {
public:
    virtual ~Phone() {};
    virtual std::string phoneAction() const = 0;
};