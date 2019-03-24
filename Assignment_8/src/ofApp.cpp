#include "ofApp.h"
#include <stdio.h>
#include <time.h>
#define CET (+1)

using namespace std;
const int framerate = 60;
time_t currentTime;
time_t sunriseTime, sunsetTime;
int currentMonth, currentDay, currentHour, currentMinute;
int sunriseHour, sunriseMinute, sunsetHour, sunsetMinute;


//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    std::string url = "https://api.darksky.net/forecast/xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx/53.54,-113.49";
    
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
    
}



//--------------------------------------------------------------
void ofApp::draw(){
    //
    std::string time = json["daily"]["data"][1]["time"].asString();
    std::string sunriseTime = json["daily"]["data"][1]["sunriseTime"].asString();
    std::string sunsetTime = json["daily"]["data"][1]["sunsetTime"].asString();
    std::string temperatureHigh = json["daily"]["data"][1]["temperatureHigh"].asString();
    std::string windSpeed = json["daily"]["data"][1]["windSpeed"].asString();
    std::string humidity = json["daily"]["data"][1]["humidity"].asString();
    
    int t = ofToInt(time)/(60*24*60);
    int d = t % 365;
    string epochTime = ofToString(d);

    ofSetColor (0);
    ofDrawBitmapString (time, 450, 100);
    ofDrawBitmapString (sunriseTime, 450, 200);
    ofDrawBitmapString (sunsetTime, 450, 300);
    ofDrawBitmapString (temperatureHigh, 450, 400);
    ofDrawBitmapString (windSpeed, 450, 500);
    ofDrawBitmapString (humidity, 450, 600);
    ofDrawBitmapString (epochTime, 450, 650);
    
    gui.draw();
    
}
