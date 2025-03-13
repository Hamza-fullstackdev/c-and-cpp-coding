#include<iostream>
using namespace std;
int main(){
    int arr[100],arr2[100],size,arr3[100];
    cout<<"Enter the size of an array elements"<<endl;
    cin>>size;
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    cout<<"After addition"<<endl;
    for(int i=0;i<size;i++){
        arr3[i]=arr[i]+arr2[i];
    }
     for(int i=0;i<size;i++){
        cout<<arr3[i]<<endl;
    }
}

