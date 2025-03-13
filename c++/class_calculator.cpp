#include<iostream>
#include<math.h>
using namespace std;

class Calculator{
	private:
		int n;
		int m;
	public:
		void sum(int o,int p){
			n=o;
			m=p;
			cout<<"The sum of a number is "<<n+m<<endl;
		}
		void square(int o){
			n=o;
			cout<<"The square of a number is "<<n*n<<endl;
		}
		void cube(int o){
			n=o;
			cout<<"The cube of a number is "<<n*n*n<<endl;
		}
		void squareroot(int o);
};

void Calculator::squareroot(int o){
	n=o;
	cout<<"The square root of a number is "<<sqrt(n)<<endl;
}

int main(){
	Calculator s1;
	s1.sum(3,3);
	s1.square(3);
	s1.cube(3);
	s1.squareroot(9);
}
