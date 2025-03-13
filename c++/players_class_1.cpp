#include<iostream>
#include<string.h>
using namespace std;

class players{
	public:
		string name="";
		int age=0;
		int pak_no=0;
		string handed_use="";
		string level="";
		void getData();
		void displayData();
};

void players::getData(){
	name=name;
	age=age;
	pak_no=pak_no;
	handed_use=handed_use;
	level=level;
	cout<<"Enter the name of a Player= ";
	cin>>name;
	cout<<"Enter the age of a player= ";
	cin>>age;
	cout<<"Enter the pak_no of a player= ";
	cin>>pak_no;
	cout<<"Enter the hand use of a player= ";
	cin>>handed_use;
	cout<<"Enter the level of a player= ";
	cin>>level;
}

void players::displayData(){
	cout<<"\n\n\nThe name of a person is "<<name<<endl<<"The age of a player is "<<age<<endl<<"The pak_no of a player is "<<pak_no<<endl
	<<"The hand use by a player is "<<handed_use<<endl<<"The level of a person is "<<level<<endl<<endl;
}

int main(){
	players player_1;
	player_1.getData();
	player_1.displayData();
}
