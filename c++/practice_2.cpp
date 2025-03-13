#include<iostream>		
using namespace std;

void getsize(int *size){
    cout<<"Enter the size of an array= ";
	cin>>*size;
}

void setElement(int size,int arr1[]){
	cout<<"\n\nEnter the elements in an array"<<endl;
	for(int i=0;i<size;i++){
		cout<<"Enter the element= ";
		cin>>arr1[i];
	}
}

void even_func(int size,int arr1[]){
    cout<<"\n\nDisplaying the even number"<<endl;
    for (int i = 0; i < size; i++)
    {
        if(arr1[i]%2==0){
            cout<<arr1[i]<<endl;
        }
    }
    
}

void odd_func(int size,int arr1[]){
	cout<<"\n\nDisplaying the odd number"<<endl;
	for(int i=0;i<size;i++){
		if(arr1[i]%2!=0){
			cout<<arr1[i]<<endl;
		}
	}
}

void positive_number(int size,int arr1[]){
	cout<<"\n\nDisplaying the positive number"<<endl;
	for(int i=0;i<size;i++){
		if(arr1[i]>0){
			cout<<arr1[i]<<endl;
		}
	}
}

void negative_number(int size,int arr1[]){
	cout<<"\n\nDisplaying the positive number"<<endl;
	for(int i=0;i<size;i++){
		if(arr1[i]<0){
			cout<<arr1[i]<<endl;
		}
	}
}

int main(){
	int arr1[10],size;
    getsize(&size);
	setElement(size,arr1);
    even_func(size,arr1);
    odd_func(size,arr1);
    positive_number(size,arr1);
    negative_number(size,arr1);
}
