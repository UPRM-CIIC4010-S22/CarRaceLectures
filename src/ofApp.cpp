#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    firstCar = Car(0,0,1,5);

}

//--------------------------------------------------------------
void ofApp::update(){

    firstCar.move(firstCar.getDirection() * firstCar.getSpeed(),0);
    if (((firstCar.getDirection() > 0) && (firstCar.getX() + 60 >= ofGetWidth())) ||
        ((firstCar.getDirection() < 0) && firstCar.getX() <= 0)) {
        firstCar.setDirection(firstCar.getDirection() * -1);
    }
}

//--------------------------------------------------------------
void ofApp::draw() {

    firstCar.draw();

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
