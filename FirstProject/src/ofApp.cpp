#include "ofApp.h"
#include "cstdlib"
#include "time.h"

//--------------------------------------------------------------
void ofApp::setup(){
	srand(time(0));
	for (int i = 0; i < 5; i++)
	{
		circles.push_back(10 + rand() % 100);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofSetColor(255, 0, 0);
	for (int i = 0; i < circles.size(); i++)
	{
		ofCircle(100 + 200 * i, 100, circles[i]);
	}
}

void insertionSort(std::vector<int>& arr) 
{
	for (size_t i = 1; i < arr.size(); i++) 
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) 
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'i')
	{
		insertionSort(circles);
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
