#include<iostream>
using namespace std;

class player{
	private:
	int age;
	public:
		int getname();
};

class displaydata:public player{
	public:
		void displayData();
};

int player::getname(){
	cout<<"Enter the name of a player= ";
	cin>>age;
    return age;
}

void displaydata::displayData(){
	cout<<"\nDisplaying the data= "<<getname();
}

int main(){
	displaydata s1;
	s1.getname();
	s1.displayData();
}