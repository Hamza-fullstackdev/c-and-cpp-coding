#include<iostream>
using namespace std;

class student{
	int a,b;
	public:
		student(int a,int b){
			this->a=a;
			this->b=b;
		}
		student sum(student o1, student o2){
	
			cout<<o1.a+o2.a;
			cout<<o1.b+o2.b;
			
		}
};

int main(){
	student obj1(3,3),obj2(2,2),obj3;
	obj3.sum(obj1,obj2);
}
