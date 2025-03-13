#include<iostream>
using namespace std;

class employee{
	public:
		int n;
		void setdata(int);
};

void employee::setdata(int n){
	this->n=n;
}

void displaydata(employee o1,employee o2)
{
	cout<<"The sum is "<<o1.n+o2.n;
}

int main(){
	employee hamza,osama;
	hamza.setdata(2);
	osama.setdata(2);
    displaydata(hamza,osama);
}
