#include<iostream>
using namespace std;

class Stack{
	int top;
	int *arr;
	
	public:
		Stack(int size){
			top=-1;
			arr=new int [size];
		}
		bool isEmpty(){
			if(top==-1){
				return true;
			}
		} 
		bool isFull(int size){
			if(top==arr[size]){
				return true;
			}
		}
		
		void push(int num){
			top++;
			arr[top]=num;
		}
		bool pop(){
			arr[top]=0;
			top--;
		}
		void print(int size){
			for(int i=0;i<size;i++){
				cout<<arr[i]<<endl;
			}
		}
		
};

int main(){
	int size;
	cout<<"Enter the size of an array you want: ";
	cin>>size;
	Stack obj(size);
	cout<<"Enter Elements: "<<endl;
	for(int i=0;i<size;i++){
		int num;
		cin>>num;
		obj.push(num);
	}
	obj.pop();
	obj.print(size);
}
