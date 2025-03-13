#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		complex(int n,int m){
			a=n;
			b=m;
		}
		complex(complex &obj2){
			a=a+obj2.a;
			b=b+obj2.b;
		}
		void displaydata();
};

void complex::displaydata(){
	cout<<a<<endl;
	cout<<b;
}
int main(){
	complex obj1(2,2),obj2(2,2);
	obj1(obj2);
	obj1.displaydata();
}
