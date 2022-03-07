#pragma once

class Car {

    private:
    int xPos;
    int yPos;
    int speed;
    int direction;

    public:
    int getX() { return xPos; }
    int getY() { return yPos; }
    int getDirection() { return direction; }
    int getSpeed() { return speed; }

    void move(int deltaX, int deltaY);
    void setDirection(int d) { direction = d; }
    void setSpeed(int s) { speed = s; }

    Car(int x, int y, int d, int s) {
        xPos = x;
        yPos = y;
        direction = d;
        speed = s;
    }

    Car()
    {
        xPos = 0;
        yPos = 0;
        direction = 1;
    }

    void draw();
};