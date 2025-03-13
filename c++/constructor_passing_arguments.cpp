#include<iostream>
using namespace std;
class local{
	int a,b;
	public:
		local(int,int);
		void display(void);
};

local::local(int x, int y){
	a=x;
	b=y;
}
void local::display(){
	cout<<"I am displaying the output= "<<a+b;
}
int main(){
	class local s1(2,3);
	s1.display();
}
