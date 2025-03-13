#include<iostream>
using namespace std;

class employee{
	protected:
	int age;
	int marks;
	public:
		string name;
		void setData();
};

void employee::setData(){
	cout<<"Enter the name of an employee= ";
	cin>>name;
	cout<<"Enter the age of a employee= ";
	cin>>age;
	cout<<"Enter the marks of a employee= ";
	cin>>marks;
}


class employee_2{

	protected:
	int room_no;
	string address;
	public:
	void setdata();
};

class result:public employee,public employee_2{
	public:
		void resultt();
		void Displaydata();
};


void employee_2::setdata(){
	cout<<"Enter the room number that is assign to a employee= ";
	cin>>room_no;
	cout<<"enter the address= ";
	cin>>address;
}

void result::resultt(){
	cout<<"=========Enter the following data:==============\n\n";
	setData();
	setdata();
}

void result::Displaydata(){
	cout<<"\n\n\n================Displaying your data============\n\n";
	cout<<"The name of a employee is: "<<name<<endl;
	cout<<"The age of a employee is: "<<age<<endl;
	cout<<"The marks of a employee is: "<<marks<<endl;
	cout<<"The room_no of a employee is: "<<room_no<<endl;
	cout<<"The address of a employee is: "<<address<<endl;
}

int main(){
	result s1;
	s1.resultt();
	s1.Displaydata();
}
