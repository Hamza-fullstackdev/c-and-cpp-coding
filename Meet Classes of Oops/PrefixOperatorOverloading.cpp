#include<iostream>
using namespace std;

class base{
	int a=34;
	public:
		base operator++(){
			a+=5;
			cout<<"The new value of a is "<<a;
		}
};
int main(){
	base obj;
	++obj;
}
