#include<iostream>
using namespace std;

class return_class{
	public:
		int sum(int a, int b);
};

int return_class::sum(int a,int b){
	return a+b;
}

int main(){
	return_class arith;
	int y=arith.sum(2,3);
	cout<<y;
}
