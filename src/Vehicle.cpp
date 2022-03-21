#include "Vehicle.h"

void Vehicle::move(int deltaX, int deltaY)  {
    this->xPos += deltaX;
    this->yPos += deltaY;
}