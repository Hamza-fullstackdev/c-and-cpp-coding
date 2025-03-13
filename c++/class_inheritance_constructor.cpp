#include<iostream>
using namespace std;

class constructor{
	public:
		constructor();
		constructor(int age, int marks);
};

class constructor_2 : public constructor{
	public:
		constructor_2();
};

constructor_2::constructor_2(){
	
	cout<<"Here it is a inherit constructor"<<endl;
	
}

constructor::constructor(){
	char name[20];
	cout<<"Enter your name= ";
	cin>>name;
}

constructor::constructor(int age,int marks){
	cout<<age<<endl;
	cout<<marks<<endl;
}

int main(){
	constructor s1(2,3);
	constructor_2 s3;
}
