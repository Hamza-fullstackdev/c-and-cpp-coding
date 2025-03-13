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

int main(){
	int arr1[10],size;
    getsize(&size);
	setElement(size,arr1);
    even_func(size,arr1);
}