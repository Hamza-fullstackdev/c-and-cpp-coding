#include<iostream>
using namespace std;

class employee{
	public:
		int num;
		employee(int num){
			this->num=num;
		}
};

void sum(employee o1, employee o2){
	cout<<"The sum of an object is "<<o1.num+o2.num;
}

int main(){
	employee obj(23),obj2(23);
	sum(obj,obj2);
}
