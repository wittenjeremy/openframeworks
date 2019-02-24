[Online consensus](https://stackoverflow.com/questions/11804820/embed-a-youtube-video) seems to suggest that Youtube videos cannot be embedded in Github. Youtube screenshot links to video.

## YouTube Link
[![alt text](https://github.com/wittenjeremy/openframeworks/blob/master/Image%20files/youtube-link.png)](https://youtu.be/I5S0qLj0v1w)

## Audio attribution
baba.wav, doh.wav and silence.wav were created by me.

aha.wav taken from [jimhancock](https://freesound.org/people/jimhancock/sounds/376318)

grr.wav taken from [crazymonke9](https://freesound.org/people/crazymonke9/sounds/418105)

## Code
#include "ofApp.h"
ofSoundPlayer silence;
ofSoundPlayer aha;
ofSoundPlayer baba;
ofSoundPlayer doh;
ofSoundPlayer grr;

int midX, midY; // no movement
int x, y, z;
int xPos,xPosone, yPos;
int sec; // 2 seconds for each emotion, 1 second reversion to netural face
//--------------------------------------------------------------

void ofApp::setup(){
    ofSetFrameRate(60);
    
    midX = ofGetWidth()/2;
    midY = ofGetHeight()/2;
    
    // integer
    x = midX;
    z = x;
    y = midY;
    xPos = ofGetWidth()/2;
    xPosone = xPos;
    yPos = ofGetHeight()/2;
    
    // loading all my sounds here
    silence.load ("silence.wav");
    aha.load("aha.wav");
    baba.load ("baba.wav");
    doh.load ("doh.wav");
    grr.load ("grr.wav");
}

//--------------------------------------------------------------
bool drawNeutral = true;
bool drawHappy = true;
bool drawSad = true;
bool drawSurprised = true;
bool drawAngry = true;


void ofApp::update(){
    int sec = (ofGetFrameNum()/60) % 60;
    drawNeutral = sec < 1;
    drawHappy = ( 1 < sec && sec < 4);
    drawSad = (  4 < sec && sec < 7);
    drawSurprised = ( 7 < sec && sec < 10);
    drawAngry = ( 10 < sec && sec < 13);
    
    if (drawNeutral) {
        silence.play ();
    }
    if (drawHappy) {
        aha.play ();
    }
    if (drawSad) {
        baba.play ();
    }
    if (drawSurprised) {
        doh.play ();
    }
    if (drawAngry) {
        grr.play ();
    }
}

//--------------------------------------------------------------

void ofApp::draw(){
    ofPolyline line;
    if (drawNeutral) {
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawLine(125, 200, 175, 200); //this is the mouth
        ofDrawLine(80,100,125,100); //this is the left eyebrow
        ofDrawLine(215,100,170,100); //this is the right eyebrow
    } else if (drawHappy) {
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawCurve(150, 80, 100, 200, 175, 200, 150, 80); //this is the curve for the smile
        ofDrawLine(80,100,125,100); //this is the left eyebrow
        ofDrawLine(215,100,170,100); //this is the right eyebrow
    } else if (drawSad) {
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawCurve(50, 300, 100, 200, 150, 200, 200, 300); //this is the curve for the frown
        ofDrawLine(80,120,125,100); //this is the left eyebrow
        ofDrawLine(215,120,170,100); //this is the right eyebrow
    } else if (drawSurprised){
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawLine(80,120,125,100); //this is the left eyebrow
        ofDrawLine(215,120,170,100); //this is the right eyebrow
        
        ofSetColor(0); //the polygon is the mouth
        ofSetLineWidth(5);
        line.begin();
        line.addVertex(ofVec3f(150,180,0));
        line.addVertex(ofVec3f(100,225,0));
        line.addVertex(ofVec3f(200,225,0));
        line.close();
        line.draw();
        
    } else if (drawAngry) {
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawCurve(50, 300, 100, 200, 150, 200, 200, 300); //this is the curve for the frown
        ofDrawLine(80,80,125,100); //this is the left eyebrow
        ofDrawLine(215,80,170,110); //this is the right eyebrow
    } else { //neutral
        ofSetColor (255, 255, 153); //the smiley face is yellow
        ofDrawCircle(150,150,100); //this is the shape of the face
        ofSetColor (0); //the eyes and the smile are black
        ofDrawCircle(100,125,5); //this is the circle for the left eye
        ofDrawCircle(200,125,5); //this is the circle for the right eye
        ofDrawLine(125, 200, 175, 200); //this is the mouth
        ofDrawLine(80,100,125,100); //this is the left eyebrow
        ofDrawLine(215,100,170,100); //this is the right eyebrow
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
