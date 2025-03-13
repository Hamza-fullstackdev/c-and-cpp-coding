#include<iostream>
using namespace std;

class test{ //Creating a class name "test"
	private:  // Access specifier
	
		int age=12;  //Properties,Data members
		string name="Hamza"; //Properties,Data members
		
	public:   //Access specifier
		int marks=23;
};

int main(){
	test obj;  //Creating an object named obj
	
//	cout<<obj.age;   // Trying accessing Private data which is not allowed
//					// so it is throwwing an error

	cout<<obj.marks;   // We can only access public data from main function
}
