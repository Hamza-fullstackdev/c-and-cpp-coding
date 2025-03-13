#include<iostream>
using namespace std;

// Q: What is inheritance?
// Ans: Calling first class functions,members from another class

// First class Name "me"
class me{
	private:
		string name="Hamza";
		int age=19;
	public:
		void displaydata(){
			cout<<name<<endl;
			cout<<age;
		}
};
// Second class name "you"
class you:public me{
	//Second class syntax:
		//Creating a class name "you" and calling
		// Public functions.
	//This mean that we now have access to the first class public data
};

int main(){
	you obj; //By using second class we are calling first class function
	obj.displaydata();
}
