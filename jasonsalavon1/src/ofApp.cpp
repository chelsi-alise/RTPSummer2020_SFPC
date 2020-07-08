#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofDirectory dir;
    dir.listDir("selfies5");
    for (int i = 0; i < dir.size(); i++) {
        
        ofImage img;
        images.push_back(img); //push_back() adds a new element to the end of a vector
        images.back().load(dir.getPath(i)); //back() returns a reference to the last element in the vector.
        
        cout << "loaded " << i << "of " << dir.size() << endl;
        
        ofRectangle targetDim(0, 0, 600, 800);
        ofRectangle imageDim(0, 0, images.back().getWidth(), images.back().getHeight());
        
        targetDim.scaleTo(imageDim);
        images.back().crop(targetDim.x, targetDim.y, targetDim.width, targetDim.height);
        images.back().resize(600, 800);
    }
    
    average.allocate(600, 800, OF_IMAGE_COLOR);
    
    for (int i = 0; i < 600; i++) {
        for (int j = 0; j < 800; j++) {
            
            // average
            //(1) add all values up
            float sumRed = 0;
            float sumGreen = 0;
            float sumBlue = 0;
            for (int k = 0; k < images.size(); k++) {
                ofColor color = images[k].getColor(i,j);
                sumRed += color.r;
                sumGreen += color.g;
                sumBlue += color.b;
            }
            //(2) divide
            sumRed /= (float)images.size();
            sumGreen /= (float)images.size();
            sumBlue /= (float)images.size();
            average.setColor(i,j, ofColor(sumRed, sumGreen, sumBlue));
        }
    }
    
    average.update();
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

    average.draw(0,0);
    //images[ofGetFrameNum() % images.size()].draw(0,0);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  if (key == ' '){
    ofSaveScreen(ofGetTimestampString() + ".png");
  }
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


