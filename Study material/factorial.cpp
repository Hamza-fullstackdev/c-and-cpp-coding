#include<iostream>
using namespace std;

class factorial{
	int n,m=1,f=1;
	public:
		void setdata();
		void calc();
		void showResult();
};

void factorial::setdata(){
	cout<<"Enter the number to find its factorial "<<endl;
	cin>>n;
}
void factorial::calc(){
	for(m=1;m<=n;m++){
		f*=m;
	}
}
void factorial::showResult(){
	cout<<"The factorial of a number is "<<f;
}

int main(){
	factorial obj;
	obj.setdata();
	obj.calc();
	obj.showResult();
}
