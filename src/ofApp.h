#pragma once

#include <vector>

#include "ofMain.h"
// #include "Car.h"
// #include "PoliceCar.h"
#include "Raceable.h"

class ofApp : public ofBaseApp{

	private:

	vector<Raceable *> theRacers;

	bool raceFinished;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		// int getCarXPos() { return carXPos; }
		// int getCarYPos() { return carYPos; }
		// int getCarSpeed() { return carSpeed; }
		// int getCarDirection() { return carDirection; }

		// void setCarXPos(int x) { carXPos = x; }
		// void setCarYPos(int y) { carYPos = y; }
		// void setCarSpeed(int speed) { carSpeed = speed; }
		// void setCarDirection(int d) { carDirection = d; }
		
};
