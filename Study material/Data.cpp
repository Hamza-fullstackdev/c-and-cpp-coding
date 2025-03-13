#include<iostream>
using namespace std;


// Q: How to pass data to a function from main function???

class test{
	private:
		string name;
		int age;
	public:
		//Creating a method to display private data on a screen.
		
		void displayData(string n, int m){  // This is known as member functions or Methods
			name=n; // initializing function data (n,m) to private data.
			age=m;
			cout<<n<<endl;
			cout<<m;
		}
};

int main(){
	test obj; // Creating an object
	obj.displayData("Hamza",19); //Giving data to a function which we promise in line 14
}
