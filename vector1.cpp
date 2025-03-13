#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a(5,100);
	vector<int> b(5,200);
	
	a.swap(b);
	
	for(int i=0;i<a.size();i++){
		cout<<" "<<a[i];
	}
	cout<<"\n";
	for(int i=0;i<b.size();i++){
		cout<<" "<<b[i];
	}
}
