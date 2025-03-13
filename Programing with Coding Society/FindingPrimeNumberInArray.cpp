#include<iostream>
using namespace std;

	void getSize(int &size);
	void takeInput(int array[],int);
	void calculatePrimeNumber(int array[],int);
//	void displayData(int array[],int);
int main(){
	int size,array[100];
	getSize(size);
	takeInput(array,size);
	calculatePrimeNumber(array,size);
//	displayData(array,size);
}
void getSize(int &size){
	cout<<"Enter the Size of an array: "<<endl;
	cin>>size;
}
void takeInput(int array[],int size){
	cout<<"\n\nEnter the elements in an array: "<<endl;
	for(int i=0;i<size;++i){
		cin>>array[i];
	}
}
void calculatePrimeNumber(int array[],int size){
	cout<<"\n\nPrime Numbers are: "<<endl;
	for(int i=0;i<size;++i){
		for(int j=2;j<array[i]/2;j++){
			if(array[i]%j==0){
				cout<<array[i]<<" is a Prime Number"<<endl;
			}
		}
	}
}
