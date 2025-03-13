#include<iostream>
using namespace std;

void getSize(int &size);
void takeInput(int array[],int);
void findEvenOrOdd(int array[],int size);
void displayData(int array[],int);

int main(){
	int size,array[100];
	getSize(size);
	takeInput(array,size);
	displayData(array,size);
	findEvenOrOdd(array,size);
}

void getSize(int &size){
	cout<<"Enter the Size of an array: ";
	cin>>size;
}
void takeInput(int array[],int size){
	cout<<"\n\nEnter the elements in an array: "<<endl;
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
}
void findEvenOrOdd(int array[],int size){
		cout<<"\n\nDisplaying the Even integers: "<<endl;
	for(int i=0; i<size;i++){
		if(array[i]%2==0){
			cout<<array[i]<<endl;
		}
	}
		
}
void displayData(int array[],int size){
	cout<<"\n\nDisplaying all the elements: "<<endl;
	for(int i=0;i<size;i++){
		cout<<array[i]<<endl;
	}
}



