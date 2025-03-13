#include<iostream>
using namespace std;
int main(){
	int arr[10],size;
	cout<<"Enter the size ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter the element= ";
		cin>>arr[i];
	}
	cout<<"The elements entered are as follow: "<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}
