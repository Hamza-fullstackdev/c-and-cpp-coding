
#include<iostream>
using namespace std;

int main() {
	int maxNumber, index=0;
	int array[5] = { 10,80,30,40,50 };
	maxNumber = array[0];
	for (int i = 0; i < 5; i++) {
		if (array[i] > maxNumber) {
			maxNumber = array[i];
			index++;
		}
	}
	cout << "The largest number " << maxNumber << " is found at " << index << endl;
}