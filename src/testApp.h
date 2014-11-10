#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxKinect.h"

#include "MotionDetector.h"
#include "UserInterface.h"
#include "SoundManager.h"
#include "IceFloorRenderer.h"

class testApp : public ofBaseApp {
public:
	
	void setup();
	void update();
	void draw();
	void exit();
	
	void drawPointCloud();
	
	void keyPressed(int key);
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	
		
 
    
    MotionDetector motionDetector;
    SoundManager   soundManager;
    UserInterface  userInterface;
    IceFloorRenderer    iceRenderer;
    
    bool            showDebug;
};
