#include<iostream>
using namespace std;
int hamza(int,int);
int main(){
	int n,m;
	cout<<"Enter the first number= ";
	cin>>n;
	cout<<"Enter the second number= ";
	cin>>m;
	cout<<hamza(n,m);
}

int hamza(int n,int m){
	return n+m;
}
