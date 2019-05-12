#include "ofApp.h"
ofSoundPlayer backing;
ofSoundPlayer building;
ofSoundPlayer canada;
ofSoundPlayer europe;
ofSoundPlayer mexico;
ofSoundPlayer china;
ofSoundPlayer explosion;

ofImage canadamap;
ofImage europemap;
ofImage mexicomap;
ofImage chinamap;
ofImage usamap;
int change= 10;

bool shift =false;
int rectw;
int recth;
int xpos, ypos =0;
//float x =90;
//float y =180;

//--------------------------------------------------------------
void ofApp::setup(){
    
    rectw = ofGetWidth();
    recth = ofGetHeight();
    
    // loading my sounds here
    
    backing.load ("backing.wav");
    building.load ("building.wav");
    canada.load ("canada.wav");
    europe.load ("europe.wav");
    mexico.load ("mexico.wav");
    china.load ("china.wav");
    explosion.load ("explosion.wav");
    
    //loading my images here
    canadamap.load ("canadamap.png");
    europemap.load ("europemap.png");
    mexicomap.load ("mexicomap.png");
    chinamap.load ("chinamap.png");
    usamap.load ("usamap.png");
    
    backing.play ();
    building.play ();


}

//--------------------------------------------------------------

void ofApp::update(){
    
    std::cout<<recth<<endl;
      x+=xspeed;
      y+=yspeed;

//China wall
    if(x<xpos){
        xspeed*=-1;
        x=xpos +100;
        shift =true;
        china.play ();
    }
//Europe wall
    if(x>rectw){
        xspeed*=-1;
        x=rectw -100;
        shift =true;
        europe.play ();
    }
    
//Canada wall
    if(y<ypos){
        yspeed*=-1;
        y=ypos +100;
        shift =true;
        canada.play ();
    }
//Mexico wall
    if(y>recth){
        yspeed*=-1;
        y=recth -100;
        shift =true;
        mexico.play ();
    }

    if(shift){
        xpos+=change;
        ypos+=change;
        rectw-=change*2;
        recth-=change*2;
        shift =false;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    usamap.draw(200,200,625,330);
    canadamap.draw(400,0,220,180);
    europemap.draw(850,275,225,175);
    mexicomap.draw(350,550,300,200);
    chinamap.draw(0,275,175,150);
    
    ofFill();
    drawTrump();
    
    ofNoFill();
    ofSetColor(165,42,42);
    ofSetLineWidth(10);
    ofDrawRectangle(xpos,ypos,rectw,recth);
    if(xpos==200){
        explosion.play ();
    }

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
