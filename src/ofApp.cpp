#include "ofApp.h"
//using namespace std;
//--------------------------------------------------------------
void ofApp::setup(){
	
	ofSetWindowTitle("osc sender");
	ofxDatGui* gui = new ofxDatGui(ofxDatGuiAnchor::TOP_LEFT);
	
	/*
	ofxDatGui* gui = new ofxDatGui(100, 100);
	ofxDatGui* gui = new ofxDatGui(ofxDatGuiAnchor::TOP_LEFT);
	ofxDatGui* gui = new ofxDatGui(ofxDatGuiAnchor::TOP_RIGHT);
	ofxDatGui* gui = new ofxDatGui(ofxDatGuiAnchor::BOTTOM_LEFT);
	ofxDatGui* gui = new ofxDatGui(ofxDatGuiAnchor::BOTTOM_RIGHT);
	*/
	gui->setAssetPath("");
	gui->addButton("Click!");
	gui->addTextInput("hi", "value");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
