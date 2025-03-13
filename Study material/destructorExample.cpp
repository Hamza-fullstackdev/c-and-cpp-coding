#include<iostream>
using namespace std;

class test{
	public:
	test(){
		cout<<"I am a constructor"<<endl;
	}
	~test(){
		cout<<"I am a destructor"<<endl;
	}
};
int main(){
	{
		test obj;
	}
	{
		test obj1;
	}
}
