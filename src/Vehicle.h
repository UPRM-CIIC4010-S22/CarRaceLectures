#pragma once

#include "ofMain.h"

class Vehicle {

    private:
    int xPos;
    int yPos;
    int speed;
    int direction;
    ofColor color;

    public:
    int getX() { return xPos; }
    int getY() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }
    ofColor getColor() { return color; }

    void move(int deltaX, int deltaY);
    void setDirection(int d) { direction = d; }
    void setSpeed(int s) { speed = s; }
    void setColor(ofColor c) { color = c; }

    Vehicle(int x, int y, int d, int s) {
        xPos = x;
        yPos = y;
        direction = d;
        speed = s;
        color = ofColor(255,255,255);
    }

    Vehicle(int x, int y, int d, int s, ofColor c) {
        xPos = x;
        yPos = y;
        direction = d;
        speed = s;
        color = c;
    }

    Vehicle()
    {
        xPos = 0;
        yPos = 0;
        direction = 1;
    }

    virtual void draw() = 0;
};