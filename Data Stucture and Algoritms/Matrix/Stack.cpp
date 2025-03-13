#include<iostream>
using namespace std;
#define SIZE 5

class Stack{
	int top;
	int arr[SIZE];
	
	public:
		Stack(){
			top=-1;
			for(int i=0;i<SIZE;i++){
				arr[i]=0;
			}
		}
		void push(int num){
			if(top==SIZE-1){
				cout<<"Stack if Full, so not be inserted"<<endl;
			}
			else{
				top++;
				arr[top]=num;
				cout<<num<<" is inserted successfully"<<endl;
			}
		}
		bool pop(){
			arr[top]=0;
			top--;
		}
		void insertatpos(int pos,int num){
			arr[pos]=num;
		}
		void print(){
			for(int i=0;i<SIZE;i++){
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	Stack obj;
	obj.push(1);
	obj.push(2);
	obj.push(3);
	obj.push(4);
	obj.push(5);
	obj.push(6);
	obj.print();	
	obj.pop();
	obj.pop();
	obj.print();
	obj.insertatpos(4,89);
	obj.print();
}





