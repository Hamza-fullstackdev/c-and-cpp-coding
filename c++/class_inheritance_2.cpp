#include<iostream>
using namespace std;

class student{
	string name;
	int age;
	int marks;
	public:
		void getdata();
};

class bscs: public student{
	protected:
		int roll_no;
	public:
		void setdata();	
};

void bscs::setdata(){
	getdata();
	cout<<"Enter the roll_no of a student= ";
	cin>>roll_no;
}

void student::getdata(){
	cout<<"Enter the name of a student= ";
	cin>>name;
	cout<<"Enter the age of a student= ";
	cin>>age;
	cout<<"Enter the marks of a student= ";
	cin>>marks;
}

int main(){
	bscs m1;
	m1.setdata();
}
