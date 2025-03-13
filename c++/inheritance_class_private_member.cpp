#include<iostream>
using namespace std;

class player{
	private:
	double n;
	public:
		int getname();
};

class displaydata:public player{
	public:
		void displayData();
};

int player::getname(){
	cout<<"Enter the number= ";
	cin>>n;
	return n;
}

void displaydata::displayData(){
	cout<<"Displaying the data= "<<player::getname();
}

int main(){
	displaydata s1;
//	s1.getname();
	s1.displayData();
}
