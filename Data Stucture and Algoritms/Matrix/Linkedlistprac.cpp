#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

class SinglyLinkedList{
	private:
		Node *head;
	public:
		SinglyLinkedList(){
			head=NULL;
		}
		~SinglyLinkedList(){
			while(head!=NULL){
				Node *temp=head;
				head=head->next;
				delete temp;
			}
		}
		
		SinglyLinkedList(const SinglyLinkedList &other):head(NULL){
			Node *temp= other.head;
			while(temp){
				insert(temp->data);
				temp=temp->next;
			}
		}
		
		SinglyLinkedList& operator=(const SinglyLinkedList& other){
			if(this!=&other){
				while(head!=NULL){
					Node *temp=head;
					head=temp->next;
					delete temp;
				}
				Node *temp= other.head;
				while(temp){
					insert(temp->data);
					temp=temp->next;
				}
			}
			return *this;
		}
		
		void insert(const int val){
			Node *temp=new Node();
			temp->data=val;
			temp->next=head;
			head=temp;
		}
		bool search(const int val){
			Node *temp=head;
			while(temp!=NULL){
				if(temp->data==val){
					return true;
				}
				temp=temp->next;
			}
			return false;
		}
		void printall(){
			Node *temp=head;
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp=temp->next;
			}
		}
		
		bool delet(const int val){
			Node *temp=head;
			Node *prev=NULL;
			if(temp != NULL && temp->data==val){
				head=temp->next;
				delete temp;
				return true;
			}
			while(temp!=NULL && temp->data!=val){
				prev=temp;
				temp=temp->next;
			}
			if(temp == NULL){
				return false;
			}
			prev->next=temp->next;
			delete temp;
			return true;
		}
			
};

int main(){
	SinglyLinkedList s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.delet(1);
	if(s.search(1)){
		cout<<"value found"<<endl;
	}else{
		cout<<"Not found"<<endl;
	}
	s.printall();
	
	SinglyLinkedList list3;
    list3 = s;
    cout << "List3 (copy of list1 using assignment operator overloading): "<<endl;
    list3.printall();
}
