#include<iostream>
using namespace std;

class Employee{
	string name;
	int age;
	int marks;
	public:
		void setdata(string,int,int);
		void displaydata();
};

void Employee::setdata(string n, int a, int m){
	name=n;
	age=a;
	marks=m;
}
void Employee::displaydata(){
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<marks<<endl;
}

int main(){
	Employee hamza;
	hamza.setdata("hamza",23,45);
	hamza.displaydata();
}
