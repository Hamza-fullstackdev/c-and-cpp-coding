#include<iostream>
using namespace std;

class student{
	char std_name[20];
	int std_roll;
	int std_marks;
	char std_classname[20];
	public:
		void getdata(void);
		void setdata(void);
};

void student::getdata(){
	int counter=1;
	for(int i=0;i<2;i++){
		cout<<"\n\nEnter the "<<counter<<" data"<<endl<<endl;
		counter++;
		cout<<"Enter your roll= ";
		cin>>std_roll;
		cout<<"Enter your name= ";
		cin>>std_name;
		cout<<"Enter your marks= ";
		cin>>std_marks;
		cout<<"Enter your class name= ";
		cin>>std_classname;
	}
}

void student::setdata(){
	int counter=1;
	for(int i=0;i<2;i++){
		cout<<"\n\nDispalying the "<<counter<<" data"<<endl<<endl;
		cout<<"The roll of a student is "<<std_roll<<endl<<"and the name of a student is "<<std_name<<endl<<"and the marks is "<<std_marks<<endl<<"study in "<<std_classname<<endl<<endl;	
	}
}

int main(){
	class student record;
	for(int i=0;i<2;i++){
		record.getdata();
		record.setdata();
	}
}
