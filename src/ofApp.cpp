#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    this->setCarXPos(0);
    this->setCarYPos(10);
    this->setCarSpeed(5);
    this->setCarDirection(1);
}

//--------------------------------------------------------------
void ofApp::update(){

    this->setCarXPos(this->getCarXPos() + this->getCarDirection() * this->getCarSpeed());
    if (((this->getCarDirection() > 0) && (this->getCarXPos() + 60 >= ofGetWidth())) ||
        ((this->getCarDirection() < 0) && this->getCarXPos() <= 0)) {
        this->setCarDirection(this->getCarDirection() * -1);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    double x = this->getCarXPos();
    double y = this->getCarYPos();
    //ofSetColor(this->getColor());
    // Draw body
    ofDrawRectangle(x + 0, y + 10, 60, 10);
    // Draw roof and windshields
    ofDrawLine(x + 10, y + 10, x + 20, y + 0);
    ofDrawLine(x + 20, y + 0, x + 40, y + 0);
    ofDrawLine(x + 40, y + 0, x + 50, y + 10);

    ofSetColor(ofColor(255,255,255));
    // Draw tires
    ofDrawCircle(x + 15, y + 25, 5);
    ofDrawCircle(x + 45, y + 25, 5);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
