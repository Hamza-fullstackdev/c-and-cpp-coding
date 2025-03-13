
#include<iostream>
using namespace std;

int main() {
	int data[9] = { 10,20,30,25,495,50,60,70,150 };
	int firstNumber, secondNumber;
	int locationFirst, locationSecond;
	firstNumber = data[0];
	secondNumber = data[1];
	locationFirst = 0;
	locationSecond = 1;

	if (firstNumber < secondNumber) {
		secondNumber = data[0];
		firstNumber = data[1];
		locationFirst = 1;
		locationSecond = 0;
	}

	for (int i = 2; i < 9; i++) {
		if (firstNumber < data[i]) {
			secondNumber = firstNumber;
			firstNumber = data[i];
			locationSecond = locationFirst;
			locationFirst = i;
		}
		else if (secondNumber < data[i]) {
			secondNumber = data[i];
			locationSecond = i;
		}
	}
	cout << "The First largest number in an array is " << firstNumber << " at index: " << locationFirst<<endl;
	cout << "The Second largest number in an array is " << secondNumber << " at index: " << locationSecond;
}