#include<iostream>
using namespace std;

class test{
	char n='A';
	public:
		void show(){
			cout<<int(n);
		}
};

int main(){
	test obj;
	obj.show();
}
