#include "ofApp.h"
#include <cstdlib>
#include <ctime>

//--------------------------------------------------------------
void ofApp::setup(){
	std::srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		int n = 10 + std::rand() % 91; // n entre 10 & 100
		circles.push_back(n);
	};
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	for (int i = 0; i < circles.size(); i++) 
	{
		ofSetColor(255, 255, 255);
		ofDrawCircle(100 + i * 200, 200, circles[i]);

		ofSetColor(0, 0, 0);
		std::string text = std::to_string(circles[i]);
		ofDrawBitmapString(text, (100 + i * 200) - text.size() * 4, 200 + 4);
	}
}

void bubbleSort(std::vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		for (int j = 0; j < arr.size() - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}

}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'b')
	{
		bubbleSort(circles);
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
