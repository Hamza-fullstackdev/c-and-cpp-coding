
#include<iostream>
using namespace std;

int main() {
	int array[8] = { 1,2,2,3,3,4,5,5 };
	int duplicateNumber, index = 0;
	for (int i = 0; i < 8; i++) {
		if (array[i] == array[i + 1]) {
			duplicateNumber = array[i];
			cout << duplicateNumber << endl;
		}
	}
}