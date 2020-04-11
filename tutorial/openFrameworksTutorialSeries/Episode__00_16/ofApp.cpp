#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	// ofSetBackgroundColor(100, 160, 200);
	ofBackground(60);
	ofEnableSmoothing();
	ofSetCircleResolution(128);

	testImage.load("testImage.png");
	testImage.rotate90(1);

	arialFont.load("arial.ttf", 32);
	text = "Hello Arial";

	testSound.load("testSound.wav");
	testSound.setVolume(0.6);
	testSound.play();
	testSound.setLoop(true);
	testSound.setSpeed(1.5);
	testSound.setPan(1.3);

	testVideo.load("testVideo.mp4");
	testVideo.setVolume(0.6);
	testVideo.play();
}

//--------------------------------------------------------------
void ofApp::update(){
	testVideo.update();
	testVideo.setSpeed(2);
}

//--------------------------------------------------------------
void ofApp::draw(){
	testVideo.draw(0, 0, ofGetWidth(), ofGetHeight());

	ofNoFill();
	ofDrawRectangle(64, 64, 64, 64);
	ofDrawCircle(192, 96, 32);
	ofDrawLine(256, 64, 320, 128);
	ofDrawTriangle(352, 128, 384, 64, 416, 128);
	ofDrawEllipse(512, 96, 128, 64);
	ofFill();
	ofDrawRectRounded(608, 64, 64, 64, 9);
	ofDrawBezier(704, 64, 736, 128, 768, 160, 800, 64);

	ofNoFill();
	ofDrawBox(64, 256, 0, 64, 64, 64);
	ofDrawCone(160, 256, 0, 32, 128);
	ofDrawCylinder(256, 256, 32, 128);
	ofDrawIcoSphere(352, 256, 0, 32);
	ofDrawPlane(448, 256, 64, 64);
	ofDrawSphere(544, 256, 32);

	ofFill();
	// ofTranslate(0, 0);
	ofDrawCircle(400, 400, 64);

	// ofTranslate(ofGetWidth() / 2, ofGetHeight() / 2);
	ofSetColor(130);
	ofDrawCircle(0, 0, 64);

	// ofTranslate(0, 0);
	testImage.draw(testImage.getWidth(), 0);
	testImage.resize(50, 50);

	ofSetColor(60);
	ofDrawBitmapString("Hello Word", 300, 300);

	arialFont.drawString(text, ofGetWidth() / 2 - arialFont.stringWidth(text), ofGetHeight() / 2 - arialFont.stringHeight(text));

	ofDrawCircle(x, y, 128);


	ofDrawCircle(ofGetMouseX(), ofGetMouseY(), size);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

	switch (key) {
		case ' ':
			x = ofRandom(0, ofGetWidth());
			y = ofRandom(0, ofGetHeight());
			break;
		case 'q':
			imgScreenshot.grabScreen(0, 0, ofGetWidth(), ofGetWidth());
			filename = "screenshot_" + ofToString(count, 3, '0') + ".png";
			imgScreenshot.save(filename);
			count++;
			break;
		default:
			break;
	} 
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
	mousex = x;
	mousey = y;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	if (button == 0) {
		size = ofRandom(32, 256);
	}
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
