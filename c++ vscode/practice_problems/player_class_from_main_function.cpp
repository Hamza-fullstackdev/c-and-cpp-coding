#include<iostream>
#include<string.h>
using namespace std;

class players{
	private:
		string name="";
		int age=0;
		int pak_no=0;
		string handed_use="";
		string level="";
	public:
		void getData();
		void displayData(string name,int age,int pak_no,string handed_use,string level);
};

void players::getData(){
	name=name;
	age=age;
	pak_no=pak_no;
	handed_use=handed_use;
	level=level;
}

void players::displayData(string name,int age,int pak_no,string handed_use,string level){
	cout<<"The name of a person is "<<name<<endl<<"The age of a player is "<<age<<endl<<"The pak_no of a player is "<<pak_no<<endl
	<<"The hand use by a player is "<<handed_use<<endl<<"The level of a person is "<<level<<endl<<endl<<endl<<endl;
}

int main(){
	players shadab,player_2;
	shadab.getData();
	shadab.displayData("shadab",23,1,"left","midle_order");
	player_2.getData();
	player_2.displayData("hamzaBey",19,2,"right","topRatedBatsman");
}