#include<iostream>
using namespace std;

class employee{
	protected:
		string name;
		int age;
		int marks;
};

class hamza: public employee{
	public:
		void setdata();
};

class saad:public hamza{
	public:
		void displaydata();
};

void hamza::setdata(){
	cout<<"Enter the name of a employee= ";
	cin>>name;
	cout<<"Enter the age of a employee= ";
	cin>>age;
	cout<<"Enter the marks of a employee= ";
	cin>>marks;
}

void saad::displaydata(){
	cout<<"The name of a employee is "<<name<<endl<<"The age of a employee is "<<age<<endl<<"The marks of a employee is "<<marks<<endl;
}

int main(){
	saad s1;
	s1.setdata();
	s1.displaydata();
}
