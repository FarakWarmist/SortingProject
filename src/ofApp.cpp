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

<<<<<<< HEAD
// Tri � Bulles ////////////////////////////////////////////////////////
=======
// Tri � Bulles
>>>>>>> origin/main
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

<<<<<<< HEAD
// Tri par Insertion ///////////////////////////////////////////////////
=======
// Tri par Insertion
>>>>>>> origin/main
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

<<<<<<< HEAD
// Tri Fusion /////////////////////////////////////////////////////////
=======
// Tri Fusion
>>>>>>> origin/main
void merge(std::vector<int>& arr, int start, int mid, int end)
{
	std::vector<int> tempArr;
	int i = start;
	int j = mid + 1;

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
		{
			tempArr.push_back(arr[i++]);
		}
		else
		{
			tempArr.push_back(arr[j++]);
		}
	}

	while (i <= mid)
	{
		tempArr.push_back(arr[i++]);
	}

	while (j <= end)
	{
		tempArr.push_back(arr[j++]);
	}

	for (int k = 0; k < tempArr.size(); k++)
	{
		arr[start + k] = tempArr[k];
	}
}

void mergeSort(std::vector<int>& arr, int start, int end)
{
	if (start < end)
	{
		int mid = start + (end - start) / 2;
		mergeSort(arr, start, mid);
		mergeSort(arr, mid + 1, end);
		
		merge(arr, start, mid, end);
	}
}

void mergeSort(std::vector<int>& arr)
{
	mergeSort(arr, 0, arr.size() - 1);
}

<<<<<<< HEAD
// Tri Rapide /////////////////////////////////////////////////////////
int partition(std::vector<int>& arr, int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			std::swap(arr[i], arr[j]);
		}
	}

	std::swap(arr[i + 1], arr[high]);
	return i + 1;
}

void quickSort(std::vector<int>& arr, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

void quickSort(std::vector<int>& arr)
{
	quickSort(arr, 0, arr.size() - 1);
}

=======
>>>>>>> origin/main
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	// Active le Tri � Bulles
	if (key == 'b')
	{
		bubbleSort(circles);
	}

	// Active le Tri par Insertion
	if (key == 'i')
	{
		insertionSort(circles);
	}

	// Active le Tri Fusion
	if (key == 'm')
	{
		mergeSort(circles);
	}
<<<<<<< HEAD

	// Active le Tri Rapide
	if (key == 'q')
	{
		quickSort(circles);
	}
=======
>>>>>>> origin/main
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
