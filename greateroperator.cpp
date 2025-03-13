#include<iostream>
using namespace std;

class base{
	int a;
	public:
		void setdata(int x){
			a=x;
		}
		bool operator>(base obj){
			if(a>obj.a){
				return true;
			}
			else{
				return false;
			}
		}
};
int main(){
	base obj1,obj2;
	obj1.setdata(5);
	obj2.setdata(3);
	if(obj1>obj2){
		cout<<"Objects are greater";
	}
	else{
		cout<<"Object are smaller";
	}
}
