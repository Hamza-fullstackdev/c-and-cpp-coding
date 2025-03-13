#include<iostream>
using namespace std;

class employee{
	int n,m;
	public:
		employee(int x,int y);
		employee(int i);
		void print();
		employee(int a,int b,int c);
};

employee::employee(int x, int y){
	cout<<"The sum of a number is "<<endl<<x+y;
}

employee::employee(int i){
	cout<<"The sum is "<<i<<endl;
}

employee::employee(int a,int b, int c){
	cout<<"The multiply of a number is "<<endl<<a*b*c;
}

int main(){
	employee s1(3,4),s2(5),s3(2,3,4);
	s2.print();
}
