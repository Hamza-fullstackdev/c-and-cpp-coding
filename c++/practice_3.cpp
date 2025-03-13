#include<iostream>
using namespace std;

class hamza{
	string name;
	int age;
	public:
		int setdata();
};

class saad:public hamza{
	public:
		void displaydata();
};

void saad::displaydata(){
	cout<<setdata();
}

int hamza::setdata(){
	cout<<"Enter the name of a person= ";
	cin>>name;
	cout<<"Enter the age of a person= ";
	cin>>age;
	return age;
}


int main(){
	saad s1;
	s1.displaydata();
}
