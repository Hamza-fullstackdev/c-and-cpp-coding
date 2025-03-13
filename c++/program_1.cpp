#include<iostream>		
using namespace std;

void getsize(int size){
	cout<<"Enter the size of an array= ";
	cin>>size;
}

void setElement(int arr1[],int size){
	cout<<"\n\nEnter the elements in an array"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Enter the element";
		cin>>arr1[i];
	}
	for(int i=0;i<size;i++){
		cout<<arr1[i];
	}
}
		
int main(){
	int arr1[100],size;
	getsize(size);
	setElement(arr1,size);
//	showResult(arr1);
}
