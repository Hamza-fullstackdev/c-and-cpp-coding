#include<iostream>
using namespace std;

class first{
	private:
		int n;
		int m;
	public:
		void sum();
};

void first::sum(){
	cout<<"Enter the first number= ";
	cin>>n;
	cout<<"Enter the second number= ";
	cin>>m;
	cout<<"The sum of a numbers is= "<<n+m;
}

class second:public first{
	public:
		void display();
};

void second::display(){
	sum();
}

int main(){
	second s1;
	s1.display();
}
