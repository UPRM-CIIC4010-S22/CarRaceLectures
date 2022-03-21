#include "Rooster.h"

void  Rooster::move(int  deltax, int deltay) {

    coords[0] += deltax;
    coords[1] += deltay;

}

void Rooster::draw() {

    roosterPicture.draw(coords[0],coords[1],60,30);

}