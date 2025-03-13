#include<iostream>
using namespace std;

class employee{
	int n;
	public:
		void setdata(int n){
			this->n=n;
		}
		employee sum(employee o1,employee o2){
			employee o3;
			o3.n=o1.n+o2.n;
			cout<<"The sum is "<<o3.n;
			return o3;
		}
};

int main(){
	employee obj,obj1,obj3;
	obj.setdata(2);
	obj1.setdata(2);
	
	obj3.sum(obj,obj1);
}
