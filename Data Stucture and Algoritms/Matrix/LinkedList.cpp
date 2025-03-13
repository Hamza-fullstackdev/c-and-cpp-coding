#include<iostream>
using namespace std;

struct Node{
	char data;
	Node *Next;
};

class SinglyLinkedList{
	Node *Head;
	public:
		SinglyLinkedList();
		void insert(const char ch);
		bool search(const char ch);
		bool delet(const char ch);
		bool isEmpty();
		void printAll();	
};
SinglyLinkedList::SinglyLinkedList(){
	Head=NULL;
}
void SinglyLinkedList::insert(const char ch){
	Node *temp=new Node();
	temp->data=ch;
	temp->Next=Head;
	Head=temp;
}
bool SinglyLinkedList::isEmpty(){
	return !Head;
}
void SinglyLinkedList::printAll(){
	if(isEmpty()){
		cout<<"Nothing to show";
	}else{
		while(Head!=NULL){
			cout<<data<<endl;
		}
	}
}
