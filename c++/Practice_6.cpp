#include<iostream>
using namespace std;

class Employee{
	protected:
		string name;
		int age;
		int salary;
	public:
		void setData();
};

class EmployeeData: public Employee{
	public:
		void displayData();
};

void Employee::setData(){
	cout<<"Enter the name of an Employee= ";
	cin>>name;
	cout<<"Enter the age of an employee= ";
	cin>>age;
	cout<<"Enter the salary of an employee= ";
	cin>>salary;
}

void EmployeeData::displayData(){
	cout<<"\n\n\nThe name of an Emplyee is "<<name<<endl
	<<"The age of an Employee= "<<age<<endl
	<<"The Salary of an Employee is "<<salary<<endl;
}

int main(){
	EmployeeData Hamza;
	Hamza.setData();
	Hamza.displayData();
}
