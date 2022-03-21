#pragma once

#include "Vehicle.h"

class Truck : public Vehicle {

public:
    Truck(int x, int y, int d, int s) : Vehicle(x, y, d, s) {}

    Truck(int x, int y, int d, int s, ofColor c) : Vehicle(x, y, d, s, c) {}

    Truck() : Vehicle(0, 0, 1, 0) {}

    virtual void draw();
};