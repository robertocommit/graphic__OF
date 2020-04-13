#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	cam.setDistance(200);
}

//--------------------------------------------------------------
void ofApp::update(){
	rotate++;
}

//--------------------------------------------------------------
void ofApp::draw(){

	// 019
	// cam.begin();
	// ofNoFill();
	// ofDrawSphere(64);
	// ofDrawCircle(0, 0, 72);
	// cam.end();

	// 020
	ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofNoFill();
	// ofRotateYDeg(rotate);
	ofRotateXRad(ofDegToRad(rotate));
	ofRotateYDeg(rotate);
	ofRotateYRad(ofDegToRad(rotate));
	ofDrawBox(128);
	ofDrawCone(200, 300);
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