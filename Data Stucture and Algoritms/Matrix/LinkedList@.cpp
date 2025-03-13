#include <iostream>
using namespace std;

// Node struct to store data and a pointer to the next node
struct Node{
    int data;
    Node *next;
};

// Singly linked list class
class SinglyLinkedList{
    private:
        Node *head; // pointer to the head node
    public:
        // constructor to initialize head to NULL
        SinglyLinkedList(){
            head = NULL;
        }

        // function to insert a node at the front of the list
        void insert(int value){
            Node *newNode = new Node; // create a new node
            newNode->data = value; // assign the value to the new node
            newNode->next = head; // link the new node to the current head
            head = newNode; // set the new node as the head
        }

        // function to delete a node with a given value
        bool delet(int value){
            Node *temp = head, *prev = NULL;
            // check if the head node has the given value
            if(temp != NULL && temp->data == value){
                head = temp->next;
                delete temp;
                return true;
            }
            // traverse the list to find the node with the given value
            while(temp != NULL && temp->data != value){
                prev = temp;
                temp = temp->next;
            }
            // if value is not found, return false
            if(temp == NULL){
                return false;
            }
            // unlink the node from the list
            prev->next = temp->next;
            delete temp;
            return true;
        }

        // function to search for a node with a given value
        bool search(int value){
            Node *temp = head;
            // traverse the list and check if a node with the given value is found
            while(temp != NULL){
                if(temp->data == value){
                    return true;
                }
                temp = temp->next;
            }
            return false;
        }

        // function to print all the values in the list
        void printAll(){
            Node *temp = head;
            // traverse the list and print the values
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};


int main(){
    SinglyLinkedList list; // create a linked list object
    // insert some values into the list
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    // print all the values in the list
    cout << "Original list: ";
    list.printAll();
    // delete a node with value 20
    if(list.delet(20)){
        cout << "20 deleted from the list." << endl;
    }
    // print all the values in the list
    cout << "After deleting 20: ";
    list.printAll();
    // search for value 30 in the list
    if(list.search(30)){
        cout << "30 found in the list." << endl;
    }
    // search for value 50 in the list
    if(!list.search(50)){
        cout << "50 not found in the list." << endl;
    }
    return 0;
}

