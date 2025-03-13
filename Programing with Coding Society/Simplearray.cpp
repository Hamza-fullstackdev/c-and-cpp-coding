#include<iostream>
using namespace std;

int main(){
	int array[100],size;
	cout<<"Enter the size of an array: ";
	cin>>size;
	cout<<"Enter the elements of an array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	cout<<"Displaying the values: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i];
	}
}
