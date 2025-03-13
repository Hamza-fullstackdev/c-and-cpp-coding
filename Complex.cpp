#include<iostream>
using namespace std;

class Complex{
	private:
		int a,b;
	public:
		void Setdata(int x, int y){
			a=x;
			b=y;
		}
		Complex sum(Complex c1){
			Complex c2;
			c2.a=a+c1.a;
			c2.b=b+c1.b;
			return c2;
		}
		void display(){
			cout<<"The value of a is "<<a<<" and b is "<<b<<endl;
		}
};
int main(){
	Complex obj1,obj2,obj3;
	obj1.Setdata(2,3);
	obj2.Setdata(3,2);
	obj3=obj1.sum(obj2);
	obj3.display();
}
