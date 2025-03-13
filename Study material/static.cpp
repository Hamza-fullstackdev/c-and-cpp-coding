#include<iostream>
using namespace std;

class prac{
	int n,m;
	static int q;
	public:
		void setdata(int,int);
};

int prac::q=0;

void prac::setdata(int o,int p){
	n=o;m=p;
	cout<<"\nMultiply number is "<<n*m<<endl;;
	q++;
	cout<<q;
}

int main(){
	prac obj,obj1,obj2;
	obj.setdata(2,3);
	obj1.setdata(3,3);
	obj2.setdata(4,3);
}

