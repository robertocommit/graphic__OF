#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	// Allocate 2D array to manage colors
	colors = new int*[AMOUNT];  
	for (int i = 0; i < AMOUNT; i++) {  
  		colors[i] = new int[3];
  	}

	ofBackground(0);
	speedx.resize(AMOUNT);
	speedy.resize(AMOUNT);
	for (int i = 0; i< AMOUNT; i++) {
		speedx[i] = ofRandom(0.0001, 0.99);
		speedy[i] = ofRandom(0.0001, 0.90);
		colors[i][0] = ofRandom(0, 255);
		colors[i][1] = colors[i][0];
		colors[i][2] = colors[i][0];
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	float time = ofGetElapsedTimef(); 
	for (int i = 0; i < AMOUNT; i++) {
		float x = ofGetWidth() * ofNoise(time * speedx[i]);
		float y = ofGetHeight() * ofNoise(time * speedy[i]);
		ofSetColor(colors[i][0], colors[i][1], colors[i][2]);
		ofDrawCircle(x, y, 8);
	}
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