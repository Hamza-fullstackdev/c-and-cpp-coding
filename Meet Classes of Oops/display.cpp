#include<iostream>
using namespace std;

class base{
	private:
		char n='a';
	public:
		char display(){
			return n;
		}
};
int main(){
	base obj;
	obj.display();
}
