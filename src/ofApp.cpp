#include "ofApp.h"
#include "Car.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // firstCar = Car(0,0,1,5);
    raceFinished = false;
    int numCars = 10;
    int laneY = 0;
    for (int i=1; i<numCars; i++) {
        theCars.push_back(Car(0,laneY,1,5));
        laneY += 40;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    if (raceFinished) return;
    
    for (int i = 0; i < theCars.size(); i++) {
        long deltaX = ofRandom(theCars[i].getSpeed()) * theCars[i].getDirection();
        theCars[i].move(deltaX, 0);
        if ((theCars[i].getDirection() > 0) && (theCars[i].getX() + 60 >= ofGetWidth())) {
            raceFinished = true;
            break;
        }
    }

    int leaderPosition = 0;
    theCars[0].setColor(ofColor(255,255,255));
    for (int i=1; i<theCars.size(); i++) {
        theCars[i].setColor(ofColor(255,255,255));
        if (theCars[i].getX() >= theCars[leaderPosition].getX()) {
            leaderPosition = i;
        }
    }
    theCars[leaderPosition].setColor(ofColor(255,0,0));

}

//--------------------------------------------------------------
void ofApp::draw() {

    for (int i = 0; i < theCars.size(); i++) {
        theCars[i].draw();
    }
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
