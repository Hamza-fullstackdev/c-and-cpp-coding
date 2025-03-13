#include<iostream>
using namespace std;

class first{
	string name;
	int age,marks=21;
	public:
		void setdata(string,int);
		void displaydata();
};
void first::setdata(string n,int a){
	name=n;
	age=a;
}
void first::displaydata(){
	cout<<"The name is "<<name<<endl;
	cout<<"The age is "<<age<<endl;
	cout<<"The marks are "<<marks;
}
class second:public first{
		
};


int main(){
	second obj;
	obj.setdata("hamza",19);
	obj.displaydata();
}
