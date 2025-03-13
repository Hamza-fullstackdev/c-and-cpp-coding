#include<iostream>
using namespace std;

class players{
	public:
		string name;
		int age;
		char level[20];
		void getdata();
};

class display:public players{
	public:
		void displaydata();
};

class inherit:public display{
	public:
		string hand;
		void handData();
};

void players::getdata(){
	cout<<"Enter the name of a player= ";
	cin>>name;
	cout<<"Enter the age of a player= ";
	cin>>age;
	cout<<"Enter the level of a player= ";
	cin>>level;
}

void display::displaydata(){
	cout<<"The name of player is "<<name<<endl<<"The age fo a player is "<<age<<endl;
	cout<<"The level of a player is "<<level<<endl;
}

void inherit::handData(){
	cout<<"Enter the hand of a player he use to play in cricket= ";
	cin>>hand;
	cout<<"\n\n"<<hand<<endl;
}

int main(){
	inherit s1;
	s1.getdata();
	s1.handData();
	s1.displaydata();

}
