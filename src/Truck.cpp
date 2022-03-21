#include "ofApp.h"

#include "Truck.h"



void Truck::draw() {

    double x = this->getX();
    double y = this->getY();
    // Draw body
    ofSetColor(this->getColor());
    ofDrawRectangle(x + 0, y + 10, 60, 10);

    // Draw roof and windshields
    ofDrawLine(x + 10, y + 10, x + 20, y + 0);

    //Draw Cargo
    ofDrawRectangle(x + 0, y + 0, 40, 20);

    ofSetColor(ofColor(255,255,255));

    // Draw tires
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 25, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5);

}