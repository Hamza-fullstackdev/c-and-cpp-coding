#include<iostream>
using namespace std;

class student{
	public:
	string name;
	int age;
	int roll;
	string className;
		void getdata();
};

class society: public student{
	public:
		void displayData();
};


void society::displayData(){
	cout<<name<<endl;
	cout<<age<<endl;
	cout<<roll<<endl;
	cout<<className;
}

void student::getdata(){
	cout<<"Enter your name= ";
	cin>>name;
	cout<<"Enter your age= ";
	cin>>age;
	cout<<"Enter your roll no= ";
	cin>>roll;
	cout<<"Enter your classname= ";
	cin>>className;
}

int main(){
	society s1;
	s1.getdata();
	s1.displayData();
}
