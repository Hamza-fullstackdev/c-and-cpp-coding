#include<iostream>
using namespace std;

class student{
	private:
		int a;
	public:
		char name[20];
		int age;
		int marks;
};


int main(){
	class student hamza;
	cout<<"Enter your name ";
	cin>>hamza.name;
	cout<<"Enter your age ";
	cin>>hamza.age;
	cout<<"Enter your marks ";
	cin>>hamza.marks;
	cout<<"\tYour name is "<<hamza.name<<endl<<"\tYour age is "<<hamza.age<<endl<<"\tYour marks is "<<hamza.marks;
}
