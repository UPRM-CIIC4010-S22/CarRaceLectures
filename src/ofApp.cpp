#include "ofApp.h"
#include "Car.h"
#include "PoliceCar.h"
#include "Truck.h"
#include "Rooster.h"

//--------------------------------------------------------------
void ofApp::setup(){

    // firstCar = Car(0,0,1,5);
    raceFinished = false;
    int numRacers = 20;
    int laneY = 10;
    for (int i=1; i<numRacers; i++) {
        if (i % 4 == 0) {
            theRacers.push_back(new Truck(0,laneY,1,5));
        } else if (i % 4 == 1) {
            theRacers.push_back(new Car(0,laneY,1,5));
        } else if (i % 4 == 2) {
            theRacers.push_back(new PoliceCar(0,laneY,1,5));
        } else {
            theRacers.push_back(new Rooster(0,laneY,1,5));
        }
        laneY += 40;
    }

}

//--------------------------------------------------------------
void ofApp::update(){

    if (raceFinished) return;
    
    for (int i = 0; i < theRacers.size(); i++) {
        long deltaX = ofRandom(theRacers[i]->getSpeed()) * theRacers[i]->getDirection();
        theRacers[i]->move(deltaX, 0);
        if ((theRacers[i]->getDirection() > 0) && (theRacers[i]->getX() + 60 >= ofGetWidth())) {
            raceFinished = true;
            break;
        }
    }

    int leaderPosition = 0;
    theRacers[0]->setColor(ofColor(255,255,255));
    for (int i=1; i<theRacers.size(); i++) {
        theRacers[i]->setColor(ofColor(255,255,255));
        if (theRacers[i]->getX() >= theRacers[leaderPosition]->getX()) {
            leaderPosition = i;
        }
    }
    theRacers[leaderPosition]->setColor(ofColor(255,0,0));

}

//--------------------------------------------------------------
void ofApp::draw() {

    for (int i = 0; i < theRacers.size(); i++) {
        theRacers[i]->draw();
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
