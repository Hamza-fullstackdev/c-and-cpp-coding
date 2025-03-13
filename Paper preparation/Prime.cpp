
//Program to find prime number with three member functions use display to call
//the function

#include<iostream>
using namespace std;

class Prime{
	int number;
	public:
		void getdata(){
			cout<<"Enter the number to find whether it is Prime or composite: ";
			cin>>number;
		}
		int calculate(){
			int isprime=0;
			if(number==0||number==1){
				isprime=1;
			}
			for(int i=2;i<=number/2;i++){
				if(number%i==0){
					isprime=1;
					break;
				}
			}
			return isprime;
		}
		void display(){
			if(calculate()==0){
				cout<<"Number is Prime";
			}else{
				cout<<"Number is Composite";
			}
		}
};

int main(){
	Prime p;
	p.getdata();
	p.display();
}


