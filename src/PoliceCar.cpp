#include "ofApp.h"

#include "PoliceCar.h"

void PoliceCar::draw() {

    Car::draw();

    double x = this->getX();
    double y = this->getY();
    // Draw body
    ofSetColor(ofColor::blue);
    ofDrawRectangle(x + 0, y + 10, 60, 10);

    // Draw biombo
    ofDrawCircle(x + 30, y - 3, 3);
    ofSetColor(ofColor(255,255,255));


}