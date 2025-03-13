#include<iostream>
using namespace std;

class friendfunction{
	
	public:
		int n=12,m=21;
		friend void add(friendfunction);
};

void add(friendfunction obj){
	cout<<n<<endl<<m;
}

int main(){
	friendfunction obj2;
	obj2.add();
}
