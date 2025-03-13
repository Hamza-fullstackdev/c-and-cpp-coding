#include <iostream>
using namespace std;

class Node{
	public:
	int data;
	Node *next;
	
	Node(int data){
		this->data = data;
		next = NULL;
	}	
};

void print_linked_list(Node *head){
	Node *temp = head;
	cout << "linked list elements are : ";
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* take_input(){
	
	cout << "Enter Elements in Linked list : ";
	int data;
	cin >> data;
	
	Node *head = NULL;
	Node *tail = NULL;
	
	while(data != -0){
		// create the node dynamically. not statically
		Node *n = new Node(data);
		
		// check wether it is first element in the linked list or not
		if(head == NULL){
			head = n;
			tail = n;
		}
		else{
			tail->next = n;
			tail = n;
		}
		
		cin >> data; // take input until the loop is terminated
	}
	
	return head;
	
}

int main(){
	Node *head = take_input();
	print_linked_list(head);
	
	return 0;
}
