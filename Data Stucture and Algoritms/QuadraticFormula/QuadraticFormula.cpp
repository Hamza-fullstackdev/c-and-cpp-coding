
#include<iostream>
#include<math.h>
using namespace std;

void quadraticFormula(int, int, int);
int main() {
	int a, b, c;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of c: ";
	cin >> c;
	quadraticFormula(a, b, c);
}
void quadraticFormula(int a, int b, int c) {
	int descrement = b * b - 4*a*c;
	if (descrement > 0) {
		float x1 = (-b + sqrt(descrement)) / (2 * a);
		float x2 = (-b - sqrt(descrement)) / (2 * a);
		cout << "X1: " << x1<<endl;
		cout << "X2: " << x2;
	}
	else if (descrement == 0) {
		float x1 = (-b) / 2 * a;
		cout << "The descriminant is " << descrement << " so X: " << x1;
	}
	else {
		cout << "The roots are complex";
	}
}