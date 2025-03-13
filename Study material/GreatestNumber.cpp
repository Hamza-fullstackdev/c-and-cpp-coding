#include<iostream>
using namespace std;

class GreatestNumber{
	int n,m,o;
	public:
		void setdata();
		void calc();
};

void GreatestNumber::setdata(){
	cout<<"Enter the First number= ";
	cin>>n;
	cout<<"Enter the Second number= ";
	cin>>m;
	cout<<"Enter the Third number= ";
	cin>>o;
}

void GreatestNumber::calc(){
	if(n>m&&n>o){
		cout<<n<<" is Greater";
	}
	else if(m>n&&m>o){
		cout<<m<<" is Greater";
	}
	else{
		cout<<o<<" is Greater";
	}
}

int main(){
	GreatestNumber obj;
	obj.setdata();
	obj.calc();
}
