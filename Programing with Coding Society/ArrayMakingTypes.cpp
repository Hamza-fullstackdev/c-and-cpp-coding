#include<iostream>
using namespace std;

int main(){
	int array[5]={1,2,3,4,5};
	cout<<"Displaying integers"<<endl;
	for(int i=0;i<5;i++){
		cout<<array[i]<<endl;
	}
	
	
	char array2[5]={'a','b','c','d','e'};
	cout<<"\n\nDisplaying Characters"<<endl;
	for(int i=0;i<5;i++){
		cout<<array2[i]<<endl;
	}
	
	
	float array3[5]={1.1,1.2,1.3,1.4,1.5};
	cout<<"\n\nDisplaying Floats"<<endl;
	for(int i=0;i<5;i++){
		cout<<array3[i]<<endl;
	}
	
	
	string array4[5]={"Hamza","saad","Nouman","Adnan","Muneeb"};
	cout<<"\n\nDisplaying Strings"<<endl;
	for(int i=0;i<5;i++){
		cout<<array4[i]<<endl;
	}
	
	//In this declaration of array we dont have to specify the Size it automaticaly adjust
//	size

	int arr[]={};
	cout<<"\n\nEnter Elements in an array: "<<endl;
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	cout<<"\n\nDisplaying Elements"<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<endl;
	}
	
	
	
	
	
	
	
	
}
