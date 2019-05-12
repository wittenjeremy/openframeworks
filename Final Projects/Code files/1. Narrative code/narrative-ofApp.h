#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
        //declare the function
        void drawTrump();
    
    float x =90;
    float y =180;
    float xspeed=0.7;
    float yspeed=0.7;
    
    float xbounds;
    float ybounds ;
    bool rightshift =false;
    bool topshift =false;
    bool bottomshift =false;
    bool leftshift =false;
    int ytop =0;
    int ybottom =ybounds;
    int xleft;
    int bshift=0;
    
};
