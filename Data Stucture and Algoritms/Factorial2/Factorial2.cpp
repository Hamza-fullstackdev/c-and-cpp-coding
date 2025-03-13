#include<iostream>
using namespace std;

int factorialOfNum(int);
int sumOfAllFactorial(int);

int main() {
	int num;
	cout << "Enter the number to find its Factorial: ";
	cin >> num;
	cout << "The Sum of all Factorial till "<<num<<" is: "<< sumOfAllFactorial(num);
}

int factorialOfNum(int num) {
	int factorial=1;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	return factorial;
}

int sumOfAllFactorial(int num) {
	int sum=0;
	for (int i = 1; i <= num; i++) {
		sum = sum + factorialOfNum(i);
	}
	return sum;
}