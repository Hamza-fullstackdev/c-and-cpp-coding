#include<iostream>
using namespace std;

class array{
	int arr1[100],size;
	public:
		void getSize();
		void setOutput();
		void displayOutput();
};

void array::getSize(){
	cout<<"Enter the size of an element= ";
	cin>>size;
}

void array::setOutput(){
	cout<<"\n\nEnter the elements in an array= "<<endl;
	for(int i=0;i<size;i++){
		cin>>arr1[i];
	}
}

void array::displayOutput(){
	cout<<"\n\nDisplaying the positive numbers in an array"<<endl;
	for(int i=0;i<size;i++){
		if(arr1[i]>0){
			cout<<arr1[i]<<endl;
		}
	}
}

int main(){
	class array first;
	first.getSize();
	first.setOutput();
	first.displayOutput();
}
