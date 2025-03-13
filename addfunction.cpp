#include<iostream>
using namespace std;

class base{
	private:
		int a,b;
	public:
		void set(int x,int y){
			a=x;
			b=y;
		}
		base add(base obj){
			base obj1;
			obj1.a=a+obj.a;
			obj1.b=b+obj.b;
			return obj1;
		}
		void display(){
			cout<<"The sum is "<<a<<" and "<<b;
		}
};

int main(){
	base obj1,obj2,obj3;
	obj1.set(2,2);
	obj2.set(3,3);
	obj3=obj1.add(obj2);
	obj3.display();
}
