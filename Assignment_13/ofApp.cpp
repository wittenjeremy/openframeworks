#include "ofApp.h"
ofSoundPlayer correct;
ofSoundPlayer incorrect;
ofSoundPlayer sopranosax;
ofSoundPlayer altosax;
ofSoundPlayer violin;
ofSoundPlayer viola;
ofSoundPlayer cello;
ofSoundPlayer bass;
ofSoundPlayer tom;
ofSoundPlayer timpani;
ofSoundPlayer rhodes;
ofSoundPlayer wurlitzer;

ofImage sopranopic;
ofImage altopic;
ofImage violinpic;
ofImage violapic;
ofImage cellopic;
ofImage basspic;
ofImage tompic;
ofImage timpanipic;
ofImage rhodespic;
ofImage wurlitzerpic;
int counter =0;
char answers[] = {'y','y','n','n','n'};
char wrong[] = {'n','n','y','y','y'};

int ind =0;

//--------------------------------------------------------------

void ofApp::setup(){
    ofBackground(255);
    
    // loading my sounds here
    correct.load ("correct.wav");
    incorrect.load ("incorrect.wav");
    sopranosax.load("sopranosax.wav");
    altosax.load ("altosax.wav");
    violin.load ("violin.wav");
    viola.load ("viola.wav");
    cello.load ("cello.wav");
    bass.load ("bass.wav");
    tom.load ("tom.wav");
    timpani.load ("timpani.wav");
    rhodes.load ("rhodes.wav");
    wurlitzer.load ("wurlitzer.wav");
    
    //loading my images here
    sopranopic.load ("sopranosax.jpg");
    altopic.load ("altosax.jpg");
    violinpic.load ("violin.jpg");
    violapic.load ("viola.jpg");
    cellopic.load ("cello.jpg");
    basspic.load ("bass.jpg");
    tompic.load ("tom.jpg");
    timpanipic.load ("timpani.jpg");
    rhodespic.load ("rhodes.jpg");
    wurlitzerpic.load ("wurlitzer.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------

void ofApp::draw(){
    
    //Soprano saxophone vs. alto saxophone
    if(counter==0){
    ofSetColor(255);
    sopranopic.draw(300,250,100,250);
    altopic.draw(500,250,250,250);
    ofSetColor(0);
    ofDrawBitmapString("Alto Saxophone",300, 520);
    ofDrawBitmapString("Soprano Saxophone",600, 520);
    ofDrawBitmapString("Click each instrument to hear a sound.", 300, 600);
    ofDrawBitmapString("Are the pictures correctly matched to the sounds?", 300, 620);
    ofDrawBitmapString("If yes, press 'Y' and if no, press 'N'", 300, 640);
    ofDrawBitmapString("If you get the wrong answer, try again!", 300, 660);
    }
    
    //Violin vs. viola
    if(counter==1){
    ofSetColor(255);
    violinpic.draw(250,250,200,200);
    violapic.draw(500,250,250,250);
    ofSetColor(0);
    ofDrawBitmapString("Violin",300, 520);
    ofDrawBitmapString("Viola",570, 520);
    ofDrawBitmapString("Click each instrument to hear a sound.", 300, 600);
    ofDrawBitmapString("Are the pictures correctly matched to the sounds?", 300, 620);
    ofDrawBitmapString("If yes, press 'Y' and if no, press 'N'", 300, 640);
    ofDrawBitmapString("If you get the wrong answer, try again!", 300, 660);
    }
    
    //Cello vs. double bass
    if (counter==2){
        
        
    ofSetColor(255);
    cellopic.draw(250,250,200,250);
    basspic.draw(500,250,250,250);
    ofSetColor(0);
    ofDrawBitmapString("Cello",330, 520);
    ofDrawBitmapString("Double Bass",600, 520);
    ofDrawBitmapString("Click each instrument to hear a sound.", 300, 600);
    ofDrawBitmapString("Are the pictures correctly matched to the sounds?", 300, 620);
    ofDrawBitmapString("If yes, press 'Y' and if no, press 'N'", 300, 640);
    ofDrawBitmapString("If you get the wrong answer, try again!", 300, 660);
    }
    
    //Floor tom vs. timpani
    if (counter==3){
    ofSetColor(255);
    tompic.draw(250,250,200,250);
    timpanipic.draw(500,250,250,250);
    ofSetColor(0);
    ofDrawBitmapString("Floor Tom",300, 520);
    ofDrawBitmapString("Timpani",600, 520);
    ofDrawBitmapString("Click each instrument to hear a sound.", 300, 600);
    ofDrawBitmapString("Are the pictures correctly matched to the sounds?", 300, 620);
    ofDrawBitmapString("If yes, press 'Y' and if no, press 'N'", 300, 640);
    ofDrawBitmapString("If you get the wrong answer, try again!", 300, 660);
    }
    
    //Rhodes or wurlitzer?
    if (counter==4){
    ofSetColor(255);
    rhodespic.draw(250,250,200,200);
    wurlitzerpic.draw(500,250,250,250);
    ofSetColor(0);
    ofDrawBitmapString("Fender Rhodes",300, 520);
    ofDrawBitmapString("Wurlitzer Electric Piano",500, 520);
    ofDrawBitmapString("Click each instrument to hear a sound.", 300, 600);
    ofDrawBitmapString("Are the pictures correctly matched to the sounds?", 300, 620);
    ofDrawBitmapString("If yes, press 'Y' and if no, press 'N'", 300, 640);
    ofDrawBitmapString("If you get the wrong answer, try again!", 300, 660);
    }
    //End screen
    if (counter==5){
    ofSetColor(0);
    ofDrawBitmapString ("Congratulations!! You have reached the end of the quiz.", 300, 550);
    }
}


//--------------------------------------------------------------

void ofApp::keyPressed(int key){

    

}



//--------------------------------------------------------------

void ofApp::keyReleased(int key){
    if (key == 'r') {
        counter=0;
        ind=0;
        
    }
    
    if (key == answers[ind]) {

        counter+=1;
        ind +=1;
        
    }
    
    if (key == wrong[ind]) {
         std::cout<<"wrong"<<endl;


    }
    if (key == answers[ind-1]) {
        correct.play();

    }
    if (key != answers[ind-1]) {
        incorrect.play();
        
    }

    

}



//--------------------------------------------------------------

void ofApp::mouseMoved(int x, int y ){
    
}



//--------------------------------------------------------------

void ofApp::mouseDragged(int x, int y, int button){
    
}



//--------------------------------------------------------------

void ofApp::mousePressed(int x, int y, int button){
    
   if(counter==0){
   if (x>=200 && x<=400 && y>=250 && y<=500) sopranosax.play();
   else if (x>=500 && x<=750 && y>=250 && y<=500) altosax.play();
    }
    else if(counter==1){
    if (x>=250 && x<=450 && y>=250 && y<=450) violin.play();
    else if (x>=500 && x<=750 && y>=250 && y<=500) viola.play();
    }
    else if (counter==2){
    if (x>=250 && x<=450 && y>=250 && y<=500) bass.play();
    else if (x>=500 && x<=750 && y>=250 && y<=500) cello.play();
    }
    else if (counter==3){
    if (x>=250 && x<=450 && y>=250 && y<=500) timpani.play();
    else if (x>=500 && x<=750 && y>=250 && y<=500) tom.play();
    }
    else if (counter==4){
    if (x>=250 && x<=450 && y>=250 && y<=450) wurlitzer.play();
    else if (x>=500 && x<=750 && y>=250 && y<=500) rhodes.play();
    }
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
