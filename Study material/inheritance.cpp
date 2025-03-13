#include<iostream>
using namespace std;
//Inheritance example

//First class
class first{
	protected: // Note that we are using protected instead of private
	// If we use private it will thrown an erorr
		string name;
		int age;
		int marks;
	public:
		void setdata(string n,int m, int o){
			name=n;//Setting data
			age=m;
			marks=o;
		}
};
//Second class
class second:public first{ 
//Inheriting class first so we get access its function and 
// data as shown bellow.
	public:
		void displaydata(){
		// Note that these properties (name,age,marks) are declare in 
		//first class but because of inheritance we can now access it
		//in this class
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<marks;
		}
};

int main(){
	second obj;
	obj.setdata("Hamza",19,65);
	obj.displaydata();
}

// Differnce between private and protected data;
// As we know that private data cannot be access from main function
// and also it cannot be inherited. But by protected we can "inherit" it
// data, but it can also be not get access from main function.
