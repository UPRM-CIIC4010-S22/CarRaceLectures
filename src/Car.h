#pragma once

#include "Vehicle.h"

class Car : public Vehicle {

    // private:
    // int xPos;
    // int yPos;
    // int speed;
    // int direction;
    // ofColor color;

    public:
    // int getX() { return xPos; }
    // int getY() { return yPos; }
    // int getDirection() { return direction; }
    // int getSpeed() { return speed; }
    // ofColor getColor() { return color; }

    // void move(int deltaX, int deltaY);
    // void setDirection(int d) { direction = d; }
    // void setSpeed(int s) { speed = s; }
    // void setColor(ofColor c) { color = c; }

    Car(int x, int y, int d, int s) : Vehicle(x,y,d,s) {
        // xPos = x;
        // yPos = y;
        // direction = d;
        // speed = s;
        // color = ofColor(255,255,255);
    }

    Car(int x, int y, int d, int s, ofColor c) : Vehicle(x,y,d,s,c) {
        // xPos = x;
        // yPos = y;
        // direction = d;
        // speed = s;
        // color = c;
    }

    Car() : Vehicle(0,0,1,0)
    {
        // xPos = 0;
        // yPos = 0;
        // direction = 1;
    }

    virtual void draw();
};