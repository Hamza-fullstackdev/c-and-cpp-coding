#include<iostream>
using namespace std;
class student{
	protected:
		string name;
		int age;
		int marks;
	public:
		void displaydata(string ,int ,int);	
};

void student::displaydata(string name,int age ,int marks){
	name=name;
	age=age;
	marks=marks;
	cout<<"The name of a student is "<<name<<endl;
	cout<<"The age of a student is "<<age<<endl;
	cout<<"The marks of a student is "<<marks<<endl;
}
int main(){
	student hamza;
	hamza.displaydata("hamza",24,100);
}
