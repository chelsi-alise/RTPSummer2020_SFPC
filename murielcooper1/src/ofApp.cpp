#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(242, 230, 206, 95);
    
    ofTrueTypeFont::setGlobalDpi(72);

    font.load("Arimo-Regular.ttf", 56);
    //font.setLineHeight(34.0f);
    
    message_p1 = "MULTIPLE";
    message_p2 = "INTERACTION";
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    int y_pos = 70;
    
    for (int i = 0; i < 19; i++) {
        
        ofSetColor(0,0,0);
        
        font.setLetterSpacing(0.78);
        font.drawString(message_p1, 50, y_pos);
        
        font.setLetterSpacing(0.78);
        font.drawString(message_p2, font.stringWidth(message_p1)+50, y_pos);
        
        font.setLetterSpacing(0.78);
        font.drawString(message_p2, font.stringWidth(message_p1)+62, y_pos);
        
        y_pos = y_pos + font.stringHeight(message_p1) + 5;

        
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
