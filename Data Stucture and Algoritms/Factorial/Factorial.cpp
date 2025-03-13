#include<iostream>
#include<conio.h>
using namespace std;

int factorialOfNumber(int);
int sumOfAllFactorial(int);

int main() {
	int num;
	cout << "Enter the number to find its Factorial: ";
	cin >> num;
	cout << "The Factorial of a "<<num<<" is "<<factorialOfNumber(num)<<endl;
	cout << "The Sum of all the Factorial till "<<num<<" is: " << sumOfAllFactorial(num);
	_getche();
	return 0;
}

int factorialOfNumber(int num) {
	int factorial = 1;
	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
	}
	return factorial;
}

int sumOfAllFactorial(int num) {
	int sum = 0, factorial = 1;
	for (int i = 1; i <=num; i++)
	{
		factorial = factorial * i;
		sum = sum + factorial;
	}
	return sum;
}