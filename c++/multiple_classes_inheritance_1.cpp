#include<iostream>
using namespace std;

//class 1 the main class starts there

class players{
	public:
		string name;
		int age;
		string performance;
};


// the derived class 1 is starting there

class hamza:public players{
	public:
	void setData();
	void displayData();	
};

void hamza::setData(){
	  cout<<"Enter the name of a player= ";
    cin>>name;
    cout<<"Enter the age of a player= ";
    cin>>age;
    cout<<"Enter the performance of a player through out the sesson= ";
    cin>>performance;
}

void hamza::displayData(){
	 cout<<"\n\nThe name of a player is "<<name<<endl<<"The age of a player is "<<age<<endl
    <<"The performance throughout year is "<<performance<<endl;
}


//second derived class starting from here

class shadab:public players{
	int marks_training;
	public:
		void setdata();
		void displaydata();
};

void shadab::setdata(){
    cout<<"\n\nEnter the name of a player= ";
    cin>>name;
    cout<<"Enter the age of a player= ";
    cin>>age;
    cout<<"Enter the performance of a player through out the sesson= ";
    cin>>performance;
    cout<<"Enter the training marks of a player= ";
    cin>>marks_training;
}

void shadab::displaydata(){
	cout<<"\n\nThe name of a player is "<<name<<endl<<"The age of a player is "<<age<<endl
    <<"The performance throughout year is "<<performance<<endl<<"The training marks of a player is "<<marks_training<<endl;
}

//main function strarting from here

int main(){
//	testing the first derived class
	hamza s2;
	s2.setData();
	s2.displayData();
//Testing the second derived class
	shadab s1;
	s1.setdata();
	s1.displaydata();
}
