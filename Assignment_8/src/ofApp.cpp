#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(0);
    std::string url = "https://api.darksky.net/forecast/266b96ffc4e9f750bdaa19672bca01d9/53.54,-113.49";
    
    //    https://api.darksky.net/forecast/266b96ffc4e9f750bdaa19672bca01d9/42.3601,-71.0589
    
    // Now parse the JSON
    bool parsingSuccessful = json.open(url);
    
    if (parsingSuccessful)
    {
        ofLogNotice("ofApp::setup") << json.getRawString(true);
    } else {
        ofLogNotice("ofApp::setup") << "Failed to parse JSON.";
    }
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
    //    cout<< t << endl;
    int d = t % 365;
    string epochTime = ofToString(d);
    
    //    float timecalc = (int)time;
    //    timecalc = (timecalc/365*24*60).asString();
    
    //    std::string SummaryOne = json["daily"]["data"][1]["SummaryOne"].asString();
    //    std::string high = json["daily"]["data"][1]["temperaturehigh"].asString();
    //    std::string low = json["daily"]["data"][1]["temperaturelow"].asString();
    //    std::string SummaryTwo = json["daily"]["data"][1]["SummaryTwo"].asString();
    //    std::string time = json["daily"]["data"][1]["time"].asString();
    //    std::string sunrise = json["daily"]["data"][1]["sunrise"].asString();
    //    std::string sunset = json["daily"]["data"][1]["sunset"].asString();
    
    
    //    string testdata = json["daily"]["data"][1]["SummaryOne"].asString();
    ofDrawBitmapString (time, 120, 100);
    ofDrawBitmapString (sunriseTime, 120, 200);
    ofDrawBitmapString (sunsetTime, 120, 300);
    ofDrawBitmapString (temperatureHigh, 120, 400);
    ofDrawBitmapString (windSpeed, 120, 500);
    ofDrawBitmapString (humidity, 120, 600);
    
    ofDrawBitmapString (epochTime, 120, 650);
    
    
    
    
    
    //    std::string testdata;
    //    ofDrawBitmapString (high, 120, 90);
    //    ofDrawBitmapString (low, 120, 80);
    //    ofDrawBitmapString (SummaryTwo, 120, 70);
    //    ofDrawBitmapString (time, 120, 60);
    //    ofDrawBitmapString (sunrise, 120, 50);
    //    ofDrawBitmapString (sunset, 120, 40);
    
    
    
    //github code-crouse
    
    
    //
    //    for (Json::ArrayIndex i = 0; i < json["response"]["docs"].size(); ++i)
    //    {
    //        std::string title  = json["response"]["docs"][i]["headline"]["main"].asString();
    //        std::string author = json["response"]["docs"][i]["byline"]["original"].asString();
    //        std::string date   = json["response"]["docs"][i]["pub_date"].asString();
    //        std::string text   = title + " - " + author + " (" + date + ")";
    //        ofSetColor(255);
    //        ofDrawBitmapString("test", 200,200);
    //    }
    //
}
