#include<iostream>
using namespace std;
int main(){
	int n,m;
	cout<<"Enter the first value= ";
	cin>>n;
	cout<<"Enter the second value= ";
	cin>>m;
	if(n>10){
		cout<<"You are pass";
	}else if(n==m){
		cout<<"You are matching";
	}else{
		cout<<"You are fail";
	}
}
