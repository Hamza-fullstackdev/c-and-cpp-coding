#include<iostream>
#include<string.h>
using namespace std;

class simple{
	string name;
    char n[20];
	int age;
	int  marks;
	public:
		simple();
		simple(string name,int age, int marks);
		simple(string name){
			cout<<"\n\n"<<name;
		}
		void sum(int e,int r);
		void name_prac();
};

void simple::sum(int e, int r){
	cout<<"\n\nThe sum is "<<e+r;
}

void simple::name_prac(){
	strcpy(n,"Hamza is a best guy ever");
    cout<<n;
}

simple::simple(){
	cout<<"\n\nHey enter your data"<<endl;
	cout<<"Enter your name= ";
	cin>>name;
	cout<<"Enter your age= ";
	cin>>age;
	cout<<"Enter your marks= ";
	cin>>marks;
	cout<<"Your name is "<<name<<" and your age is "<<age<<" and your marks is "<<marks<<endl;
}

simple::simple(string name,int age,int marks){
	cout<<"\n\nYour name is "<<name<<endl<<"Your age is "<<age<<endl<<"Your marks is "<<marks<<endl;
}

int main(){
	simple s1,s2("Hamza",23,50),s3("hamzaDon");
	simple hamza;
	hamza.sum(33,44);
	hamza.name_prac();
}