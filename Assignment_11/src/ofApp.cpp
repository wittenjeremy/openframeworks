#include "ofApp.h"
#include <stdio.h>
#include <time.h>
#define CET (+1)
ofSoundPlayer Bell;
ofSoundPlayer BellDrums;
ofSoundPlayer BellDrumsBass;
ofSoundPlayer BellDrumsBassHum;
ofSoundPlayer BellDrumsBassHumGuitar;
ofSoundPlayer BellDrumsBassHumGuitarVoice;

using namespace std;
const int framerate = 60;
time_t currentTime;
time_t sunriseTime, sunsetTime;
int currentMonth, currentDay, currentHour, currentMinute;
int sunriseHour, sunriseMinute, sunsetHour, sunsetMinute;
int temperature, windspeed, clouds, rain, lightning;
int f = temperature;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    std::string url = "https://api.darksky.net/forecast/xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx/40.70,-73.92";
    
    //  Parsing the JSON
    bool parsingSuccessful = json.open(url);
    
    if (parsingSuccessful)
    {
        ofLogNotice("ofApp::setup") << json.getRawString(true);
    }
    
    else {
        ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
    }
    
    ofSetFrameRate(framerate);
    ofBackground(255, 255, 255);
    gui.setup();
    gui.add(humidity.setup("Humidity", json["currently"]["humidity"].asFloat(), 0, 1));
    gui.add(windspeed.setup("Windspeed", json["currently"]["windSpeed"].asFloat(), 0, 1));
    gui.add(hour.setup("Current hour", json["daily"]["data"][1]["time"].asFloat(), 0, 23));
    gui.add(current.setup("Actual time", true));
    gui.add(sunriseTime.setup("Sunrise", false));
    gui.add(sunsetTime.setup("Sunset", false));
    
    //loading my sounds here
    Bell.load ("Bell.mp3");
    BellDrums.load ("BellDrums.mp3");
    BellDrumsBass.load ("BellDrumsBass.mp3");
    BellDrumsBassHum.load ("BellDrumsBassHum.mp3");
    BellDrumsBassHumGuitar.load ("BellDrumsBassHumGuitar.mp3");
    BellDrumsBassHumGuitarVoice.load ("BellDrumsBassHumGuitarVoice.mp3");
    
    bool f=true;
}

//--------------------------------------------------------------
void ofApp::update(){
    if (70 < f > 50) {
        Bell.play ();
    }
    if (70 > f < 50) {
        BellDrums.play ();
    }
    if (70 > f < 50 and windspeed > 1) {
        BellDrumsBass.play ();
    }
    if (70 > f < 50, windspeed > 1, clouds=true) {
        BellDrumsBassHum.play ();
    }
    if (70 > f < 50, windspeed > 1, clouds=true, rain=true) {
        BellDrumsBassHumGuitar.play ();
    }
    if (70 > f < 50 and windspeed > 1, clouds=true, rain=true, lightning=true) {
        BellDrumsBassHumGuitarVoice.play ();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
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
