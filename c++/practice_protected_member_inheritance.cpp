#include<iostream>
using namespace std;

class employee{
	protected:
		string name;
		int age;
	public:
		void setdata();
};

class hamza: public employee{
	public:
		void displaydata();
		void protectdata();
};

void employee::setdata(){
	cout<<"Enter the name of employee= ";
	cin>>name;
	cout<<"Enter the age of a employee= ";
	cin>>age;
}

void hamza::displaydata(){
	cout<<"\n\n\nThe name of a employee is "<<name<<endl<<"The age of a employee is "<<age<<endl;
}

void hamza::protectdata(){
	cout<<"\n\nAccessing the members of emplyee from there: ";
	cout<<"\n"<<name<<endl;
	cout<<age;
}

int main(){
	hamza s1;
	s1.setdata();
	s1.displaydata();
	s1.protectdata();
}
