#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup() {
	ofSetLogLevel(OF_LOG_VERBOSE);

	showDebug=false;
	
	motionDetector.init();
    iceRenderer.init();
    
   
	ofSetFrameRate(25);
	
}

//--------------------------------------------------------------
void testApp::update() {
    
	
    motionDetector.update(userInterface.getFarThreshold());
	iceRenderer.update(motionDetector.getBlobs());
}

//--------------------------------------------------------------
void testApp::draw() {
	ofClear(0,0,0);
	
    iceRenderer.draw();
    
    if(showDebug)
        motionDetector.drawDebugScreen();
    
    userInterface.draw();
	
    
}


//--------------------------------------------------------------
void testApp::exit() {
    
    motionDetector.shutDownBeforeExit();
    
}

//--------------------------------------------------------------
void testApp::keyPressed (int key) {
	
    switch(key)
    {
        case '\t':
            showDebug = !showDebug;
            break;
    }
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button)
{}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button)
{}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button)
{}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h)
{}
