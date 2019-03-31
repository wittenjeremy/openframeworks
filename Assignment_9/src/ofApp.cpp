#include "ofApp.h"
ofSoundPlayer building;

//--------------------------------------------------------------
void ofApp::setup(){
    
    xbounds =ofGetWidth();
    ybounds =ofGetHeight();
    ybottom =ybounds;

    // loading my sounds here
    building.load ("building.wav");
}

//--------------------------------------------------------------

void ofApp::update(){
    x+=xspeed;
    y+=yspeed;
    //boundry conditions
    
    //right wall
    if(x>xbounds-60 ){
        x=xbounds-120;
        xspeed*=-1;
        rightshift =true;
        building.play ();
        
    }
        //left wall
        else if (x<60){
        xspeed*=-1;
        building.play ();
        leftshift =true;
        
            //bottom wall
    }else if(y>ybounds-60) {
        yspeed*=-1;
        bottomshift =true;

    }
    //top wall
    else if(y<60){
        yspeed*=-1;
        topshift=true;
        building.play ();
        
    }
    if(rightshift ==true){
          xbounds-=50;
        rightshift =false;
        building.play ();
    }
    if(topshift ==true){
        ytop +=50;
        topshift =false;
        building.play ();
    }
    if(leftshift ==true){
        xleft +=50;
        leftshift =false;
        building.play ();
    }
    if(bottomshift ==true){
        ybottom -=50;
        bottomshift =false;
        building.play ();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    drawTrump();
      ofSetColor (101,67,33);
    //top
    ofDrawRectangle(0,ytop,xbounds,10);
    
    //right wall
    ofDrawRectangle(xbounds-10,ytop,10,ybounds);
    
    //bottom wall
    ofDrawRectangle (0,ybottom-10,xbounds,10);
    
    //left wall
    ofDrawRectangle(0, ytop, 10, ybounds);
    
    

}

//--------------------------------------------------------------
void ofApp::drawTrump(){
    ofSetColor (0,0,255);
    ofDrawRectangle(x,y,120,100);
    ofSetColor (245,146,108);
    ofDrawEllipse (x+60,y-50,125,150);
    ofSetColor (0);
    ofDrawLine (x+30,y-70,x+50,y-50);
    ofDrawLine (x+90,y-70,x+70,y-50);
    ofDrawBezier (x+75,y-20,x+30,y-20,x+30,y+10,x+75,y+10);
    ofSetColor(255,255,153);
    ofDrawEllipse(x+75,y-95,150,60);
    ofSetColor(248,51,60);
    ofDrawTriangle(x+60,y+35,x+50,y+25,x+70,y+25);
    ofDrawTriangle(x+60,y+30,x+45,y+60,x+75,y+60);
    ofDrawTriangle(x+60,y+70,x+45,y+60,x+75,y+60);
    ofDrawEllipse (x+45,y-45,5,10);
    ofDrawEllipse (x+75,y-45,5,10);

}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
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
