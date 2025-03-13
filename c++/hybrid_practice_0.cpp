#include<iostream>
using namespace std;

class first{
	protected:
	int n;
	public:
		void setdata(){
			cout<<"\t\tEnter the first number= ";
			cin>>n;
		}
};

class second{
	protected:
	int m;
	public:
		void setdata_2(){
			cout<<"\t\tEnter the second number= ";
			cin>>m;
		}
};

class third:public first,public second{
	public:
		void displaydata(){
			setdata();
			setdata_2();
		}
		void result(){
			cout<<"\t\tThe sum of a number is= "<<n+m;
		}
		
};

int main(){
	third s1;
	s1.displaydata();
	s1.result();
}
