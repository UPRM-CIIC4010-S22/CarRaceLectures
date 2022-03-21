#include "ofMain.h"
#include "Raceable.h"

class Rooster : public Raceable {

private:
    int coords[2];   // coords[0] = x  coords[1] = y
    int velocity[2]; // velocity[0] = speed  velocity[1] = direction
    ofImage roosterPicture;

public:

    Rooster(int x, int y, int d, int s) {
        coords[0] = x;
        coords[1] = y;
        velocity[1] = d;
        velocity[0] = s;
        roosterPicture.load("Rooster.png");
    }

    Rooster(int x, int y, int d, int s, ofColor c) {
        coords[0] = x;
        coords[1] = y;
        velocity[1] = d;
        velocity[0] = s;
    }

    Rooster()
    {
        coords[0] = 0;
        coords[1] = 0;
        velocity[1] = 0;
        velocity[0] = 0;
    }

    virtual int getX() { return coords[0]; }
    virtual int getY() { return coords[1]; }
    virtual int getDirection() { return velocity[1]; }
    virtual int getSpeed() { return velocity[0]; }
    virtual ofColor getColor() { return ofColor::white; }  // Color ignored by Rooster class

    virtual void move(int deltaX, int deltaY);
    virtual void setDirection(int d) { velocity[1] = d; }
    virtual void setSpeed(int s) { velocity[0] = s; }
    virtual void setColor(ofColor c) {}

    virtual void draw();
};