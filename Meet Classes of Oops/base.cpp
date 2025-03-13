#include<iostream>
using namespace std;

class base{
	private:
		int n,m;
	public:
		void setdata(int a, int b){
			n=a;
			m=b;
		}
		base add(base obj){
			
//			base object;
//			object.n=n+obj.n;
//			object.m=m+obj.m;
//			return object;
			
			
			cout<<n+obj.n<<endl;
			cout<<m+obj.m<<endl;
			cout<<m;
		}
//		void display(){
//			cout<<n,m;
//		}
};
int main(){
	base obj1,obj2;
	obj1.setdata(2,3);
	obj2.setdata(4,5);
	obj2.add(obj1);
}







