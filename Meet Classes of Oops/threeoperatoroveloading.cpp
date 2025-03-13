#include<iostream>
using namespace std;

class base{
	int a,b;
	public:
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		base operator+(base obj1,base obj2){
			base obj;
			obj.a=a+obj1.a+obj2.a;
			obj.b=b+obj1.b+obj2.b;
			return obj;
			//Error ocure: Because operator overloading takes only one argument.
		}
		void display(){
			cout<<"Sum of A is "<<a<<" and for B is "<<b<<endl;
		}
};
int main(){
	base obj1,obj2,obj3,obj4;
	obj1.setdata(2,3);
	obj1.display();
	obj2.setdata(3,4);
	obj2.display();
	obj3.setdata(4,5);
	obj3.display();
	obj4=obj1+obj2+obj3;
	obj4.display();
}
