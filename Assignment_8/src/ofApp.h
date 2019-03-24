#pragma once


#include "ofMain.h"
#include "ofxJSON.h"
#include "ofxGui.h"


class ofApp: public ofBaseApp
{
public:
    void setup();
    void draw();
    
    ofxJSONElement json;
    
    ofxPanel gui;
    ofxIntSlider hour;
    ofxToggle current;
    ofxFloatSlider humidity;
    ofxFloatSlider windspeed;
    ofxToggle sunriseTime;
    ofxToggle sunsetTime;
    
    
};
