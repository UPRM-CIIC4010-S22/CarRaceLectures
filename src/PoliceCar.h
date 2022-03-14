#pragma once

#include "Car.h"
#include "ofMain.h"

class PoliceCar : public Car {

public:
    PoliceCar(int x, int y, int d, int s) : Car(x, y, d, s) {}

    PoliceCar(int x, int y, int d, int s, ofColor c) : Car(x, y, d, s, c) {}

    PoliceCar() : Car(0, 0, 0, 0) {}

    virtual void draw();
    
};