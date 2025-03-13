#include<iostream>
using namespace std;

class base{
	private:
		int n;
	public:
		double display(int n, int m){
			n=n;
			m=m;
			cout<<n<<m;
		}
};

int main(){
	base obj;
	obj.display(2,3);
}
