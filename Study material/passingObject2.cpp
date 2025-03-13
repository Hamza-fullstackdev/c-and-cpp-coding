#include<iostream>
using namespace std;

class complex{
	int n,m;
	public:
		void setdata(int o,int p){
			n=o;
			m=p;
		}
		complex add(complex obj){
			complex ans;
			ans.n=n+obj.n;
			ans.m=m+obj.m;
			return ans;	
		}
		void display(){
			cout<<n<<endl;
			cout<<m;
		}
};

int main(){
	complex obj1,obj2;
	obj1.setdata(2,3);
	obj2.setdata(4,5);
	complex obj3=obj1.add(obj2);
	obj3.display();
}
