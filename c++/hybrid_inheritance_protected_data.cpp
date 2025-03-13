#include<iostream>
using namespace std;

class players{
	protected:
		int roll_no;
		char name[30];
		int marks;
};

class hamza:public players{
	public:
	void setdata();
	void displaydata();
};


void hamza::setdata(){
	cout<<"=============Enter the following data==============\n\n\n";
	cout<<"\nEnter the name of a player= ";
	cin>>name;
	cout<<"Enter the roll_no of a player= ";
	cin>>roll_no;
	cout<<"Enter the marks of a player= ";
	cin>>marks;
}

void hamza::displaydata(){
	cout<<"\n\n=================Following are the data entered by the user==================\n\n";
	cout<<"The name of a player is "<<name<<endl<<"The rollno of a employee is "<<roll_no<<endl<<"The marks of a employee is "<<marks<<endl;

}

class display:public hamza{
	public:
		void displayEmployeeOverAllData(){
			setdata();
			displaydata();
		}
};

int main(){
	display s1;
	s1.setdata();
	s1.displayEmployeeOverAllData();
}
