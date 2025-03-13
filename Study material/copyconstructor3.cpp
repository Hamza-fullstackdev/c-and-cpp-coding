#include<iostream>
using namespace std;
class hamza{
	int n,m;
	public:
		hamza(int o,int p){
			n=o;
			m=p;
		}
		hamza(hamza &obj){
			n=obj.n;
			m=obj.m;
			cout<<obj.n;
		}
};
int main(){
	hamza obj1(12,12);
	hamza obj2(obj1);
}
