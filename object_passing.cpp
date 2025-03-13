#include<iostream>
using namespace std;

class addition{
	public:
		int a,b;
		void sum(addition obj1){
			cout<<"The sum of the objects are "<<a+obj1.a;
		}
};

int main(){
	addition obj1,obj2;
	obj1.a=3;
	obj2.a=5;
	obj1.sum(obj2);
}
