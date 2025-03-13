#include<iostream>
using namespace std;

class Node{
	public:
	Node(int d):data{d}, next{NULL} {}
	Node *next;
	int data;
	
};

Node *Linked_list(int arr[],int size){
	Node *head=NULL;
	Node *tail=NULL;
	
	Node *node=new Node(arr[0]);
	head=node;
	tail=node;
	
	for(int i=1;i<size;i++){
		Node *node=new Node(arr[i]);
		tail->next=node;
		tail=node;
	}
	return head;
}

void Print_Linked_list(Node *head){
	
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}


int main(){
	int arr[]={1,2,3,4,5,6,7,8};
	int size=sizeof(arr)/sizeof(int);
	
	Node *head=Linked_list(arr,size);
	Print_Linked_list(head);
	return 0;
}
