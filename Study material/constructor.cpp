#include<iostream>
using namespace std;

class test{ //Creating a class name test
	public:
		test(){ //Creating a constructor known as default constructor.
// The name of a constructor has to be as same as class name.
// In this case classs name is test.So to make a constructor we use test()	
			cout<<"Hello Iam a Constructor";
		}
};

int main(){
	test obj;
	// To call a constructor we just create an 
	// object it will automatically call a constructor
	// Dont need of obj.test() "This will throw an error"
}
