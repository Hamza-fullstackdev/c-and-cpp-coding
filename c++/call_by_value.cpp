#include<iostream>
using namespace std;

class arg_func{
	int n,m,o;
	public:
		void sum(int a,int b,int c);
		void subt(int a,int b,int c);
		void multi(int a,int b,int c);
		void divide(int a,int b,int c);
};

void arg_func::sum(int a,int b,int c){
//	n=a;
//	m=b;
//	o=c;
	cout<<"The sum of a number is= "<<a+b+c<<endl;
}

void arg_func::subt(int a,int b,int c){
	n=a;
	m=b;
	o=c;
	cout<<"The subtract of a number is= "<<n-m-o<<endl;
}
void arg_func::multi(int a,int b,int c){
	n=a;
	m=b;
	o=c;
	cout<<"The multiply of a number is= "<<n*m*o<<endl;
}
void arg_func::divide(int a,int b,int c){
	n=a;
	m=b;
	o=c;
	cout<<"The divide of a number is= "<<n/m/o;
}

int main(){
	class arg_func arith;
	arith.sum(1,3,4);
	arith.subt(5,6,7);
	arith.multi(2,3,4);
	arith.divide(9,7,8);
}
