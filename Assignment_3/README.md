# Project 1
## Narrative
My narrative will use four symbolic elements to provide a commentary on dreams versus everyday life and the ways in which these two things can affect our happiness and sadness. Dreams will be represented with the symbol of a balloon. Everyday life will be represented with the symbol of a house. Happiness and sadness will be represented with smiling and frowning faces respectively. This four elements will interact with each other in different ways in order to provide a commentary on realizing our dreams and realizing our own happiness.

# Project 2
## Visualization
I will use darksky weather API to create a representation with sound and color. I intend to use the numerical weather data to correspond to specific pitches and specific colors. Since weather is described with a base-10 system of numbers, I will use ten unique pitches and ten unique colors, both of which will correspond to the final digit in a particular degree in fahrenheit. For example, 20 degrees fahrenheit and 30 degrees fahreinheit will generate the same pitch and the same color because 0 is the final digit in both 20 and 30. I will then use specific geographic locations to generate 12-note melodies and color changing visualizations by assembling their average monthly degree in fahrenheit from January-December in a particular year. A year of a particular city's changing temperature average will result in a unique melody and a unique montage of color. Perhaps I will create three distinct representations from the temperature data of New York City, Mexico City, and Shanghai. I plan to make a YouTube video playlist of whichever cities I end up choosing.

# Project 3
## Game
My game is similar to a maze, but it will challenge the user to memorize the basic rules of Western musical harmony. The game will challenge a user to get from "Point 1" to "Point 2" in a grid of letters A-G with sharps and flats, representing musical notes. The challenge is that the path that the user takes from Point 1 to Point 2 will test their knowledge of Western harmony. The user will be assigned a random gamepiece which could be any letter from Ab to G#, representing a musical key. An upper case letter gampepiece represents a major key and a lower case letter gamepiece represents a minor key. If assigned A, for example, that user is "the key of A Major" and must use the arrow keys to follow a path that includes only the notes in the key of A Major (A, B, C♯, D, E, F♯, and G♯) to get from Point 1 to Point 2 in the grid. If a player assigned A attempts to get from Point 1 to Point 2 by crossing their gamepiece to a tile that is not in the key of A major, their gamepiece is transported back to Point 1 and they must start again. The game player is essentially tested in their knowledge of what notes are contained in a particular musical key. Can you get from Point 1 to Point 2 using only tiles of the notes that are in your assigned key? That is the challenge!

## Screenshots
![alt text](https://github.com/wittenjeremy/openframeworks/blob/master/Image%20files/CodeScreenshot1.png)
![alt text](https://github.com/wittenjeremy/openframeworks/blob/master/Image%20files/CodeScreenshot2.png)
![alt text](https://github.com/wittenjeremy/openframeworks/blob/master/Image%20files/jeremy's%20of%20program.gif)

The four elements I created include a blue house, a blue sad face, a yellow balloon, and a yellow smiley face. 

# Code for Shape Drawing Project
#include "ofApp.h"



int midX, midY;

//--------------------------------------------------------------

void ofApp::setup(){

    ofSetFrameRate(60);

    midX = ofGetWidth() / 2;

    midY = ofGetHeight() / 2;

}



bool drawFirst = true;

bool drawSecond = true;

bool drawThird = true;

bool drawFourth = true;

//--------------------------------------------------------------

void ofApp::update(){

    int sec = (ofGetFrameNum() / 60) % 60;

    drawFirst = sec < 2;

    drawSecond = sec < 4;

    drawThird = sec < 6;

    drawFourth = sec < 8;

}



// ofTime t;

//--------------------------------------------------------------

void ofApp::draw(){

    if (drawFirst) //first draw a house

    {

            ofSetColor (30, 144, 255); //the exterior of the house is blue

            ofDrawRectangle(10, 40, 80, 90); //this is the base of the house

            ofSetColor (0); //the roof of the house is black

            ofDrawTriangle (50,10,10,40,90,40); //this is the roof of the house

            ofSetColor (0); //the door of the house is black

            ofDrawRectangle(40,90,20,40); //this is the door of the house

    }

        else if (drawSecond) //then draw a glum face

        {

            ofSetColor (30, 144, 255); //blue is the color for glum

            ofDrawCircle(150,150,100); //this is the circle for the sad face

            ofSetColor (0);

            ofDrawCircle(100,125,5); //this is the circle for the left eye

            ofSetColor (0);

            ofDrawCircle(200,125,5); //this is the circle for the right eye

            ofSetColor (0);

            ofDrawCurve(50, 300, 100, 200, 150, 200, 200, 300); //this is the curve for the mouth

        }

    else if (drawThird)//then draw a balloon

    {

        ofSetColor(255, 255, 153); //the balloon is yellow

        ofDrawEllipse(150,130,150,200); //this is the balloon

        ofDrawTriangle(150,210,125,250,175,250); //this is the knot of the balloon

        ofSetColor(0); //the string for the balloon is black

        ofDrawLine(150,250,200,350); //this is the string of the balloon

    }

    

    else if(drawFourth) //then draw a smiley face

    {

        ofSetColor (255, 255, 153); //the smiley face is yellow

        ofDrawCircle(150,150,100); //this is the shape of the face

        ofSetColor (0); //the eyes and the smile are black

        ofDrawCircle(100,125,5); //this is the circle for the left eye

        ofDrawCircle(200,125,5); //this is the circle for the right eye

        ofDrawCurve(150, 80, 100, 200, 175, 200, 150, 80); //this is the curve for the smile

    }

    // cout << t.getAsMilliseconds() << endl;

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

