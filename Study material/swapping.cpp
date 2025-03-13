#include<iostream>
using namespace std;

class swapp{
	int n,m,temp;
	public:
		void getdata(int,int);
		void logic();
		void showdata();
};

void swapp::getdata(int o,int p){
	n=o;
	m=p;
}
void swapp::logic(){
	temp=n;
	n=m;
	m=temp;
}
void swapp::showdata(){
	cout<<"First number is "<<n<<endl;
	cout<<"Second number is "<<m;
}

int main(){
	swapp obj;
	obj.getdata(2,3);
	obj.logic();
	obj.showdata();
	return 0;
}
