#include<iostream>
using namespace std;

class base{
	public:
		void display(){
			cout<<"First class";
		}
};

class derived: public base{
	public:
		void display2(){
			cout<<"Second class";
		}
};

class derived2: public base{
	public:
		void display3(){
			cout<<"Third class";
		}
};

class derived3: public base,public derived,public derived2{
	
};

int main(){
	derived3 obj;
	obj.display2();
}










