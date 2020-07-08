#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(ofColor(217, 212, 210, 85));
    //ofEnableBlendMode(OF_BLENDMODE_SUBTRACT);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSeedRandom(0);
    //float offset = mouseY;
    
    float offset1 = 10;
    float offset2 = 24;
    float offset3 = 35;
    
    float x_one = 0;
    float y_one = 0;
    float x_two = 0;
    float y_two = 0;
    
    //creates grid
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++) {
            
            /*
            float x_one = 70;
            float y_one = 70;
            float x_two = 140 + ofRandom(-offset,offset);
            float y_two = 140 + ofRandom(-offset,offset);
             */
            
            //map positions to the grid
            x_one = ofMap(i, 0, 5, 0, 500);
            y_one = ofMap(j, 0, 5, 0, 500);
            x_two = ofMap(i, 0, 5, 0, 500);
            y_two = ofMap(j, 0, 5, 0, 500);
            
            //draw the shape in individual position multiple times with offset of choice
            for (int k = 0; k < 3; k++) {
                
                //draw the fill
                ofSetColor(217, 212, 210, 85);//bg color
                ofBeginShape();
                ofVertex(x_one + 90 + ofRandom(-offset1,offset1), y_one + 90 + ofRandom(-offset1,offset1));
                ofVertex(x_two + 180 + ofRandom(-offset1,offset1), y_one + 90 + ofRandom(-offset1,offset1));
                ofVertex(x_two + 180 + ofRandom(-offset1,offset1), y_two + 180 + ofRandom(-offset1,offset1));
                ofVertex(x_one + 90 + ofRandom(-offset1,offset1), y_two + 180 + ofRandom(-offset1,offset1));
                ofEndShape(true);
                
                //draw the stroke
                ofNoFill();
                ofSetColor(242, 110, 34, 95);//orange
                //ofSetColor(111, 168, 191, 75);//blue1
                //ofSetColor(42, 112, 140, 55);//blue2
                ofVertex(x_one + 90 + ofRandom(-offset1,offset1), y_one + 90 + ofRandom(-offset1,offset1));
                ofVertex(x_two + 180 + ofRandom(-offset1,offset1), y_one + 90 + ofRandom(-offset1,offset1));
                ofVertex(x_two + 180 + ofRandom(-offset1,offset1), y_two + 180 + ofRandom(-offset1,offset1));
                ofVertex(x_one + 90 + ofRandom(-offset1,offset1), y_two + 180 + ofRandom(-offset1,offset1));
                ofEndShape(true);
                
            }
            
            //draw the shape in individual position multiple times with offset of choice
            for (int l = 0; l < 3; l++) {
                
                //draw the fill
                ofSetColor(217, 212, 210, 85);//bg color
                ofBeginShape();
                ofVertex(x_one + 90 + ofRandom(-offset2,offset2), y_one + 90 + ofRandom(-offset2,offset2));
                ofVertex(x_two + 180 + ofRandom(-offset2,offset2), y_one + 90 + ofRandom(-offset2,offset2));
                ofVertex(x_two + 180 + ofRandom(-offset2,offset2), y_two + 180 + ofRandom(-offset2,offset2));
                ofVertex(x_one + 90 + ofRandom(-offset2,offset2), y_two + 180 + ofRandom(-offset2,offset2));
                ofEndShape(true);
                
                //draw the stroke
                ofNoFill();
                ofSetColor(242, 110, 34, 95);//orange
                //ofSetColor(111, 168, 191, 75);//blue1
                //ofSetColor(42, 112, 140, 55);//blue2
                ofVertex(x_one + 90 + ofRandom(-offset2,offset2), y_one + 90 + ofRandom(-offset2,offset2));
                ofVertex(x_two + 180 + ofRandom(-offset2,offset2), y_one + 90 + ofRandom(-offset2,offset2));
                ofVertex(x_two + 180 + ofRandom(-offset2,offset2), y_two + 180 + ofRandom(-offset2,offset2));
                ofVertex(x_one + 90 + ofRandom(-offset2,offset2), y_two + 180 + ofRandom(-offset2,offset2));
                ofEndShape(true);
                
            }
            
            //draw the shape in individual position multiple times with offset of choice
            for (int m = 0; m < 3; m++) {
                
                //draw the fill
                ofSetColor(217, 212, 210, 85);//bg color
                ofBeginShape();
                ofVertex(x_one + 90 + ofRandom(-offset3,offset3), y_one + 90 + ofRandom(-offset3,offset3));
                ofVertex(x_two + 180 + ofRandom(-offset3,offset3), y_one + 90 + ofRandom(-offset3,offset3));
                ofVertex(x_two + 180 + ofRandom(-offset3,offset3), y_two + 180 + ofRandom(-offset3,offset3));
                ofVertex(x_one + 90 + ofRandom(-offset3,offset3), y_two + 180 + ofRandom(-offset3,offset3));
                ofEndShape(true);
                
                //draw the stroke
                ofNoFill();
                ofSetColor(242, 110, 34, 95);//orange
                //ofSetColor(111, 168, 191, 75);//blue1
                //ofSetColor(42, 112, 140, 55);//blue2
                ofVertex(x_one + 90 + ofRandom(-offset3,offset3), y_one + 90 + ofRandom(-offset3,offset3));
                ofVertex(x_two + 180 + ofRandom(-offset3,offset3), y_one + 90 + ofRandom(-offset3,offset3));
                ofVertex(x_two + 180 + ofRandom(-offset3,offset3), y_two + 180 + ofRandom(-offset3,offset3));
                ofVertex(x_one + 90 + ofRandom(-offset3,offset3), y_two + 180 + ofRandom(-offset3,offset3));
                ofEndShape(true);
                
            }
            
            /*
            float x = ofMap(i, 0, 5, 70, 600);
            float y = ofMap(j, 0, 5, 70, 600);
            
            //draw the fill
            //ofFill(); this is set by default so no need to call it but nice for learning <3
            ofSetColor(217, 212, 210, 85);
            ofDrawRectangle(x, y, 105, 105);
            
            //draw the stroke
            ofNoFill();
            ofSetColor(242, 127, 61, 95);
            ofDrawRectangle(x, y, 105, 105);
             */
            
            //cout << mouseY << endl;
            
        }
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
