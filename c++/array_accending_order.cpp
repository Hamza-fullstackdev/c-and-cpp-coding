#include<iostream>
using namespace std;
int main(){
	int size,arr1[100],a;
	cout<<"Enter the size of an array= ";
	cin>>size;
	cout<<"Enter the elements in array: \n";
	for(int i=0;i<size;i++){
		cin>>arr1[i];
	}
	
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr1[i]>arr1[j]){
				a=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=a;
			}
		}
	}
	cout<<"The elements in accending order is\n";
	for(int i=0;i<size;i++){
		cout<<arr1[i]<<endl;
	}
}
