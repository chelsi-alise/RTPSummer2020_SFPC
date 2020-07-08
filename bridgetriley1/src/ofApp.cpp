#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(245, 245, 245);
    ofSetWindowShape(800, 800);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //right side of grid
    float rec_width = ofGetWidth()/16;
    float rec_height = ofGetHeight()/16;
    
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            
            float xpct = ofMap(i, 0, 16, 0, 1);
            //xpct = powf(xpct, mouseX * 0.1);
            xpct = powf(xpct, 27 * 0.1);//mouseX=27
            
            float xpct2 = ofMap(i+1, 0, 16, 0, 1);
            //xpct2 = powf(xpct2, mouseX * 0.1);
            xpct2 = powf(xpct2, 27 * 0.1);//mouseX=27
            
            float rec_xpos = ofMap(xpct, 0, 1, 500, ofGetWidth());
            float rec_xpos2 = ofMap(xpct2, 0, 1, 500, ofGetWidth());
            
            float rec_ypos = ofMap(j, 0, 16, 0, ofGetWidth());
            
            if ((i + j) % 2 == 0){
                 ofSetColor(245, 245, 245);//white-ish
             } else {
                 ofSetColor(40,40,40);//black-ish
             }
            
            ofDrawRectangle(rec_xpos, rec_ypos, rec_xpos2-rec_xpos, rec_height);
            
            
            cout << mouseX << endl;
            
        }
    }
    
    //left side of grid
    float rec_width_left = ofGetWidth()/16;
    float rec_height_left = ofGetHeight()/16;
    
    
    for (int l = 0; l < 16; l++) {
        for (int m = 0; m < 16; m++) {
            
            float xpct_left = ofMap(l, 0, 16, 1, 0);
            xpct_left = powf(xpct_left, mouseX * 0.1);
            //xpct_left = powf(xpct_left, 16 * 0.1);//mouseX=16
            
            float xpct2_left = ofMap(l+1, 0, 16, 1, 0);
            xpct2_left = powf(xpct2_left, mouseX * 0.1);
            //xpct2_left = powf(xpct2_left, 16 * 0.1);//mouseX=16
            
            float rec_xpos_left = ofMap(xpct_left, 0, 1, 0, 500);
            float rec_xpos2_left = ofMap(xpct2_left, 0, 1, 0, 500);
            
            float rec_ypos_left = ofMap(m, 0, 16, 0, ofGetWidth());
            
            if ((l + m) % 2 == 0){
                 ofSetColor(245, 245, 245);//white-ish
             } else {
                 ofSetColor(40,40,40);//black-ish
             }
            
            ofDrawRectangle(rec_xpos_left, rec_ypos_left, rec_xpos2_left-rec_xpos_left, rec_height_left);
        
            
            cout << mouseX << endl;
            
        }
    }
    //left side of grid

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
