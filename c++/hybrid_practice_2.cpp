#include<iostream>
using namespace std;


class data_1{
	public:
		string name;
		int age;
		int marks;
	void setData();
};

void data_1::setData(){
	cout<<"Enter the name of a person: ";
	cin>>name;
	cout<<"Enter the age of a person: ";
	cin>>age;
	cout<<"Enter the marks of a person: ";
	cin>>marks;
}
class data_2{
	public:
		string department;
		string classs;
		int roll_no;
	void Setdata();
};

void data_2::Setdata(){
	cout<<"Enter the department: ";
	cin>>department;
	cout<<"Enter the class name: ";
	cin>>classs;
	cout<<"Enter the roll number of a person: ";
	cin>>roll_no; 
}

class data_3:public data_1,public data_2{
	public:
	void DisplayData();
	void printData();
};

void data_3::DisplayData(){
	cout<<"Enter the First data\n\n\n\n";
	setData();
	cout<<"\n\n\nEnter the second data\n\n\n\n";
	Setdata();
}

void data_3::printData(){
	cout<<"\n\n=================DIsplaying Result:====================\n\n";
	cout<<"The name of a person is "<<name<<endl;
	cout<<"The age of a person is "<<age<<endl;
	cout<<"The marks of a person is "<<marks<<endl;
	cout<<"The Department of a person is "<<department<<endl;
	cout<<"The class of a person is "<<classs<<endl;
	cout<<"The roll number of a person is "<<roll_no<<endl;
}

int main()
{
	data_3 s1;
	s1.DisplayData();
	s1.printData();
}


