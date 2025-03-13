
/* In this program we insert data from the user and ask him different function that whether he want to store data, delete or update the previouse 
data*/

#include<iostream>
using namespace std;

// class_1 for variables protected

class employee{
	protected:
		string name;
		int age;
		long cnic;
	public:
		void setdata();
};

//Different method or choices for user

class update:public employee{
	public:
		void displaydata();
		void update_data();
		void deletedata();
};

// Method for delete data

void update::deletedata(){
	cout<<"\n\n===============The data has been deleted==================\n\n";
}

// Method for update the data

void update::update_data(){
	cout<<"================Update your data====================== \n\n";
	setdata();
	displaydata();
}

// Setdata for the user

void employee::setdata(){
	cout<<"Enter your name= ";
	cin>>name;
	cout<<"Enter your age= ";
	cin>>age;
	cout<<"Enter your CNIC= ";
	cin>>cnic;
}

// Displaying the data entered by the user

void update::displaydata(){
	cout<<"\n\nYour name is "<<name<<endl;
	cout<<"Your age is "<<age<<endl;
	cout<<"Your CNIC is "<<cnic<<endl;
}

// Function call that combine all the classes and different couts for the user to help them

void getdatachoice();


// Our main function

int main(){
	update s1;
	getdatachoice();
}

// Function that run First with different methods

void getdatachoice(){
	update s1;
	string choice;
	cout<<"Are you want to store your data\n\n";
	cout<<"Yes\t\t\tNo\t\t update data\n\n";
	cout<<"Tell us your choice: ";
	cin>>choice;
	cout<<"\n\n";
	if(choice=="Yes"||choice=="yes"){
		s1.setdata();
		cout<<"\n\n============Data has been stored Successfully==============\n\n";
		cout<<"showdata\t\tExit\n\n";
		string result;
		cin>>result;
		if(result=="show"||result=="Show"){
			s1.displaydata();
		}
		else if (result=="exit"||choice=="Exit"){
			cout<<"\n\n===========You are exited, Feel free to contact us====================\n\n";
		}
	}
	else if(choice=="No"||choice=="no"){
		s1.deletedata();
	}
	else if(choice=="update"||choice=="Update"){
		s1.update_data();
	}
}





