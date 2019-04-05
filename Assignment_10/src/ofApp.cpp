#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    tip.set(50,10);
    center.set(ofGetWidth()/2,ofGetHeight()/2);
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

int degStep = 360; //press left arrow!

void drawTriangle(ofPoint origin, int i){
    ofPushMatrix();
    ofPushStyle();

    ofTranslate(origin);
    ofSetColor(100+(25*i),0,0);
    
//     for (int j=0; j<360/i; j++) {
//    ofRotateZDeg(j);
           ofRotateZDeg(degStep/i);
         
    ofDrawTriangle(50,10,10,40,90,40);
    if (i > 1)
       drawTriangle(ofPoint(50,10),i-1);
    
    ofPopStyle();
    ofPopMatrix();
//     }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofPushMatrix ();
//    ofTranslate(ofGetWidth()/2, ofGetHeight()/2); //go to center of screen
    
//    for (int i=0; i<360; i+=degStep) {
//        ofPushMatrix();
//        ofPushStyle ();
    
//        ofRotateZDeg(i);
         drawTriangle(center,4);
        
//        ofPopStyle();
//        ofPopMatrix();
//    }
//
    ofPopMatrix();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if( key == OF_KEY_LEFT){
        degStep--;
    }
    
    if( key ==OF_KEY_RIGHT){
        degStep++;
    }
    
    if (degStep <1){
        degStep = 1;
    }
    
    cout <<degStep <<endl;
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
