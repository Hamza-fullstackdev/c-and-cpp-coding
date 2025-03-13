#include<iostream>
using namespace std;

class Player{
	protected:
		string name;
		int age;
		int training_marks;
	public:
		void setData();
};

class inherit: public Player{
	public:
		void displayData();
};

void inherit::displayData(){
	cout<<"\n\n\nThe name of a Player is "<<name<<endl<<"The age of a Player is "<<age<<endl<<"The Training marks of  a Player is "<<training_marks<<endl;
}

void Player::setData(){
	cout<<"=====================Enter the following Data==================\n\n"<<endl;
	cout<<"Enter the name of a Player= ";
	cin>>name;
	cout<<"Enter the Age of a Player= ";
	cin>>age;
	cout<<"Enter the Training marks of a Player= ";
	cin>>training_marks;
}


int main(){
	class inherit hamza;
	hamza.setData();
	hamza.displayData();
}
