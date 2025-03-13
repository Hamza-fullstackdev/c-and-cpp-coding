#include<iostream>
using namespace std;

// A constructor is just used to give values to a data members.

class hello{
	private:
		string name;
		int age;
	public:
		//Creating a perameterized constructor
		hello(string n,int m){ 
			name=n; //initializing value to data members
			age=m;
		}
		void displaydata(){
			cout<<name<<endl;  //Displaying data
			cout<<age;
		}
};

int main(){
	hello obj("Hamza",19);//Passing data as we promise in line 12
	//Very imp: Dont need of obj.hello() to call a constructor
	obj.displaydata();
	// calling function to displaydata
}
