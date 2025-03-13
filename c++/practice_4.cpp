#include<iostream>
using namespace std;

class employee{
	string name;
	int age;
	int marks;
	public:
		void getdata();
};

class employee_2:private employee{
	public:
		void displaydata();
};

void employee::getdata(){
	cout<<"Enter the name of a employee= ";
	cin>>name;
	cout<<"Enter the age of an employee= ";
	cin>>age;
	cout<<"Enter the marks of an employee= ";
	cin>>marks;
}

void employee_2::displaydata(){
	cout<<name<<endl<<age<<endl<<marks;
}

int main(){
	employee s1;
	s1.getdata();
	s1.displaydata();
}
