#include<iosream>		
using namespace std;

void func(int* ptr);

int main(){
	int n;
	cout<<"Enter the number= ";
	cin>>n;
	func(&n);
}
void func(int* ptr){
	cout<<*ptr;
}
