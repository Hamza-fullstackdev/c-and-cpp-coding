#include<iostream>
using namespace std;

void getsize(int &size);
void takeinput(int array[],int);
void displaydata(int array[],int size);

int main(){
	int size,array[100];
	getsize(size);
	takeinput(array,size);
	displaydata(array,size);
}
void getsize(int &size){
	cout<<"Enter the Size of an array: ";
	cin>>size;
}
void takeinput(int array[],int size){
	cout<<"Enter elements in an array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
}
void displaydata(int array[],int size){
	cout<<"Displaying data of an array: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
}
