#include<iostream>
#include<cstring>
using namespace std;

struct student{
	char name[20];
	int age;
	int marks;
}hamza;
int main(){
	strcpy(hamza.name,"Hamza is a good guy");
	cout<<"Enter your age= ";
	cin>>hamza.age;
	cout<<"Enter your marks= ";
	cin>>hamza.marks;
	cout<<"\tYour name is "<<hamza.name<<endl<<"\tYour age is "<<hamza.age<<endl<<"\tYour marks is "<<hamza.marks;
}
