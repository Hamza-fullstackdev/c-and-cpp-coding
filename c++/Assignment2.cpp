#include<iostream>
using namespace std;

class complex{
	float real,img;
	public:
		void set(float,float);
		void disp();
		void sum(float,float);
};

void complex::set(float num1,float num2){
	real=num1;
	img=num2;
}

void complex::disp(){
	cout<<"The complex data entered is "<<real<<" and "<<img<<endl;
}

void complex::sum(float num3,float num4){
	cout<<"The sum of complex numbers is "<<real+num3<<" and "<<img+num4;	
}
int main(){
	complex obj1,obj2,obj3;
	obj2.set(2.2,3.3);
	obj3=obj2;
	obj3.disp();
}
