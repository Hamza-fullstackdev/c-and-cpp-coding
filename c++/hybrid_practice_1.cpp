#include<iostream>
using namespace std;

class A{
	private:
		int n;
	public:
		int First_num();
};

int A::First_num(){
	cout<<"Enter the first number= ";
	cin>>n;
	return n;
}

class B{
	int m;
	public:
		int sec_num();
};

int B::sec_num(){
	cout<<"Enter the second number= ";
	cin>>m;
	return m;
}


class C: public A, public B{
	public:
		void result(){
			cout<<First_num()+sec_num();
		}
};

int main(){
	C s1;
	s1.result();
}
