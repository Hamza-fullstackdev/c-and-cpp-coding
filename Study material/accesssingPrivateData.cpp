#include<iostream>
using namespace std;


// Q: How to get access to the private data???
// Ans: By making public functions.
class test{
	private:
		string name="hamza";
		int age=19;
	public:
		//Creating a method to display private data on a screen.
		
		void displayData(){  // This is known as member functions or Methods
			cout<<name<<endl;  //Endl is for new line
			cout<<age;
		}
};

int main(){
	test obj; // Creating an object
	obj.displayData(); // Calling a function to show data
}
