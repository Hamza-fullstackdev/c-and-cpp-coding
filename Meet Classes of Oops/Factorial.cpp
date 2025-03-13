#include<iostream>
using namespace std;

class Factorial{
	private:
		int number,result;
	public:
		void setdata();
		int calculation();
		void display();
};

void Factorial::setdata(){
	cout<<"Enter the number to find its Factorial: ";
	cin>>number;
}
int Factorial::calculation(){
	int m=1;
	for(int i=1;i<=number;i++){
		m=m*i;
	}
	result=m;
	return result;
}

void Factorial::display(){
	if(calculation()){
		cout<<calculation();
	}
}
int main(){
	Factorial obj;
	obj.setdata();
	obj.display();
}
