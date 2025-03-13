#include<iostream>
using namespace std;

class base{
	protected:
		int lenght,width;
	public:
		base():lenght(2),width(3){
		}
		virtual int calculation()=0;
};

class derive: public base{
	public:
		int calculation(){
			return lenght+width;
		}
};

class derive2: public derive{
	public:
		int calculation(){
			return lenght*width;
		}
};

int main(){
	derive2 obj;
	derive obj1;
	cout<<obj1.calculation();
	cout<<obj.calculation();
}
