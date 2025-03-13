#include<iostream>
using namespace std;

class employee{
	char name[20];
	int age;
	int marks;
	public:
		void getdata();
		void setdata();
};

employee::getdata(){
	cout<<"Enter your name= ";
	cin>>name;
	cout<<"Enter your age= ";
	cin>>age;
	cout<<"Enter your marks= ";
	cin>>marks;
}
employee::setdata(){
	cout<<"Your name is "<<name<<endl<<"and Your age is "<<age<<endl<<" and your marks is "<<marks;
}

int main(){
	class employee hamza;
	hamza.getdata();
	hamza.setdata();
}
