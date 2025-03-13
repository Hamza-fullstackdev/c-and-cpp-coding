#include<iostream>
using namespace std;
// Copy Constructor
// Copy constructor is use to initialize another object
// with same values 

// :) aye smajh

class hamza{
	private:
		int age,marks;
	public:
		
		hamza(int a, int b){
			age=a;
			marks=b;
		}
		hamza(hamza &obj){
			age=obj.age;
			marks=obj.marks;
		}
		void displaydata(){
			cout<<"\n"<<age<<endl;
			cout<<marks;
		}
};
int main(){
	//PAssing vallues to the constructor
	hamza obj(23,34);
	obj.displaydata();
	// initializing same data to second object
	hamza obj2(obj);
	obj2.displaydata();
}
