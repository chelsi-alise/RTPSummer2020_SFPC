#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundColor(ofColor(232, 232, 232, 91));
    
    ofTrueTypeFont::setGlobalDpi(72);
    font.load("MintGroteskTrialV0.8-Black.otf", 56, true, true);
    
    letter = "M";
    

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //float horizontalPosition = 170;
    //float verticalPosition = 150;
    
    for (int i = 0;i < 8; i++) {
        
        float horizontalPosition = 170 + ofMap(i, 0, 7, 0, 400);
        
        for (int j = 0;j < 7; j++) {
            
            float verticalPosition = 150 + ofMap(j, 0, 6, 0, 400);
            
            if (j == 0) {
                ofSetColor(217, 11, 49);//red
                ofPushMatrix();
                ofScale(1,4,1);
                float deltah = font.stringHeight(letter) * 2;
                font.drawString(letter, horizontalPosition, verticalPosition - deltah);
                ofPopMatrix();
            } else if (j == 1) {
                ofSetColor(134, 63, 162);//purple1
                ofPushMatrix();
                ofScale(1,2,1);
                float deltah = font.stringHeight(letter);
                font.drawString(letter, horizontalPosition, verticalPosition - deltah + 5);
                ofPopMatrix();
            } else if (j == 2) {
                ofSetColor(59, 81, 40);//green
                ofPushMatrix();
                ofScale(1,1,1);
                float deltah = font.stringHeight(letter) * 3;
                font.drawString(letter, horizontalPosition, verticalPosition + deltah);
                ofPopMatrix();
            } else if (j == 3) {
                ofSetColor(88, 143, 198);//blue
                ofPushMatrix();
                ofScale(1,0.75,1);
                float deltah = font.stringHeight(letter) * 6;
                font.drawString(letter, horizontalPosition, verticalPosition + deltah - 8);
                ofPopMatrix();
            } else if (j == 4) {
                ofSetColor(64, 7, 127);//purple2
                ofPushMatrix();
                ofScale(1,0.5,1);
                float deltah = font.stringHeight(letter) * 13;
                font.drawString(letter, horizontalPosition, verticalPosition + deltah - 18);
                ofPopMatrix();
            } else if (j == 5) {
                ofSetColor(243, 113, 12);//orange
                ofPushMatrix();
                ofScale(1,0.25,1);
                float deltah = font.stringHeight(letter) * 35;
                font.drawString(letter, horizontalPosition, verticalPosition + deltah);
                ofPopMatrix();
            } else {
                ofSetColor(72, 44, 188);//purple3
                ofPushMatrix();
                ofScale(1,0.1,1);
                float deltah = font.stringHeight(letter) * 105.5;
                font.drawString(letter, horizontalPosition, verticalPosition + deltah);
                ofPopMatrix();
            }
            
            //font.drawString(letter, horizontalPosition, verticalPosition);
            
            //horizontalPosition += font.stringWidth(letter);
            //verticalPosition += font.stringHeight(letter);
            
        }
        
    }
    
    //font.setLineHeight(34.0f);
    //font.setLetterSpacing(1.035);
    
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
