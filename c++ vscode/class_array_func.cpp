#include<iostream>
using namespace std;

class array_func{
    int arr1[100];
    int arr2[100];
    int size;
    public:
        void getSize();
        void setOutput();
        void displayOutput();
};

void array_func::getSize(){
    cout<<"Enter the size of an array= ";
    cin>>size;
}

void array_func::setOutput(){
    cout<<"\n\nPlease enter the First array elements"<<endl<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the "<<i+1<<" element in an array= ";
        cin>>arr1[i];
    }

    cout<<"\n\nPlease enter the Second array elements"<<endl<<endl;
    for (int i = 0; i <size; i++)
    {
       cout<<"Enter the "<<i+1<<" element in an array= ";
        cin>>arr2[i];
    }
    
}

void array_func::displayOutput(){
    cout<<"\n\nDisplaying the output addition"<<endl;
    for (int i = 0; i <size; i++)
    {
        cout<<arr1[i]+ arr2[i]<<endl;
    }
}

int main(){
    array_func first;
    first.getSize();
    first.setOutput();
    first.displayOutput();
}