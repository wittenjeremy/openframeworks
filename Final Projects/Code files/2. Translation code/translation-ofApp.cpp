#include "ofApp.h"
ofSoundPlayer Bell;
ofSoundPlayer building;
ofSoundPlayer BellDrums;
ofSoundPlayer BellDrumsBass;
ofSoundPlayer BellDrumsBassHum;
ofSoundPlayer BellDrumsBassHumGuitar;
ofSoundPlayer BellDrumsBassHumGuitarVoice;

int windSpeed;
int clouds;
int temp;
int rain;
int storm;

//--------------------------------------------------------------
void ofApp::setup(){
Bell.load ("Bell.wav");
BellDrums.load ("BellDrums.wav");
BellDrumsBass.load ("BellDrumsBass.wav");
BellDrumsBassHum.load ("BellDrumsBassHum.wav");
BellDrumsBassHumGuitar.load ("BellDrumsBassHumGuitar.wav");
BellDrumsBassHumGuitarVoice.load ("BellDrumsBassHumGuitarVoice.wav");
    
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
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    windSpeed =json["currently"]["windSpeed"].asInt();
    std::cout << windSpeed << endl;
    
    clouds =json["currently"]["cloudCover"].asInt();
    std::cout << clouds << endl;
    
    temp =json["currently"]["temperature"].asInt();
    std::cout << temp << endl;
    
    rain =json["currently"]["precipIntensity"].asInt(); //inches of rain per hour
    std::cout << rain << endl;
    
    storm =json["currently"]["nearestStormDistance"].asInt(); //how far away is the storm in miles?
    std::cout << storm << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
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

//-------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

    if((windSpeed<1) && (clouds<0.001) && (temp>50 && temp <70) && (rain<0.001) && (storm>5)){
        Bell.play();
    }
    else if((windSpeed>1) && (clouds<0.001) && (temp>50 && temp <70) && (rain<0.001) && (storm>5)){
        BellDrums.play();
    }
    else if ((windSpeed>1) && (clouds>0.001) && (temp>50 && temp<70 ) && (rain<0.001) && (storm>5)){
        BellDrumsBass.play();
    }
    else if ((windSpeed>1) && (clouds>0.001) && (temp<50 || temp>70 ) && (rain<0.001) && (storm>5)){
        BellDrumsBassHum.play();
    }
    else if ((windSpeed>1) && (clouds>0.001) && (temp<50 || temp>70 ) && (rain>0.001)&& (storm>5)){
        BellDrumsBassHumGuitar.play();
    }
    else if ((windSpeed>1) && (clouds>0.001) && (temp<50 || temp>70 ) && (rain>0.001) && (storm<5)){
        BellDrumsBassHumGuitarVoice.play();
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
