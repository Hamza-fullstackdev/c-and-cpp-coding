#include<iostream>
using namespace std;

class employee{
	int n,m;
	public:
		void setdata(int o, int p){
			n=o;
			m=p;
		}
		void add(employee obj){
			employee obj4;
			obj4.n=n+obj.n;
			obj4.m=m+obj.m;
			cout<<obj4.m;
		}
};

int main(){
	employee obj1,obj2,obj3;
	obj1.setdata(2,2);
	obj2.setdata(3,7);
	obj1.add(obj2);
}
