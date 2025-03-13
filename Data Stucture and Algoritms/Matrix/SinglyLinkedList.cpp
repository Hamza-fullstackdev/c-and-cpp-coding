#include <iostream>

struct Node{
    char data;
    Node *Next;
};

class SinglyLinkedList{
    Node *Head;
    public:
        SinglyLinkedList() : Head(NULL) {}

        SinglyLinkedList(const SinglyLinkedList& other) : Head(NULL) {
            Node* other_node = other.Head;
            while (other_node) {
                insert(other_node->data);
                other_node = other_node->Next;
            }
        }

        SinglyLinkedList& operator=(const SinglyLinkedList& other) {
            if (this != &other) {
                clear();
                Node* other_node = other.Head;
                while (other_node) {
                    insert(other_node->data);
                    other_node = other_node->Next;
                }
            }
            return *this;
        }

        ~SinglyLinkedList() {
            clear();
        }

        void insert(const char ch) {
            Node* newNode = new Node{ch, NULL};
            if (Head == NULL) {
                Head = newNode;
            } else {
                Node* currentNode = Head;
                while (currentNode->Next != NULL) {
                    currentNode = currentNode->Next;
                }
                currentNode->Next = newNode;
            }
        }

        bool search(const char ch) {
            Node* currentNode = Head;
            while (currentNode != NULL) {
                if (currentNode->data == ch) {
                    return true;
                }
                currentNode = currentNode->Next;
            }
            return false;
        }

        bool delet(const char ch) {
            Node* currentNode = Head;
            Node* previousNode = NULL;

            while (currentNode != NULL) {
                if (currentNode->data == ch) {
                    if (previousNode == NULL) {
                        Head = currentNode->Next;
                    } else {
                        previousNode->Next = currentNode->Next;
                    }
                    delete currentNode;
                    return true;
                }
                previousNode = currentNode;
                currentNode = currentNode->Next;
            }
            return false;
        }

        bool isEmpty() {
            return Head == NULL;
        }

        void printAll() {
            Node* currentNode = Head;
            while (currentNode != NULL) {
                std::cout << currentNode->data << " ";
                currentNode = currentNode->Next;
            }
            std::cout << std::endl;
        }

    private:
        void clear() {
            while (Head != NULL) {
                Node* currentNode = Head;
                Head = Head->Next;
                delete currentNode;
            }
        }
};


int main() {
    SinglyLinkedList list1;

    // insert some elements into the list
    list1.insert('a');
    list1.insert('b');
    list1.insert('c');
    list1.insert('d');

    // print the elements in the list
    std::cout << "List1: ";
    list1.printAll();

    // test the search function
    std::cout << "Does list1 contain 'c'? " << list1.search('c') << std::endl;
    std::cout << "Does list1 contain 'e'? " << list1.search('e') << std::endl;

    // test the delete function
    std::cout << "Deleting 'b' from list1\n";
    list1.delet('b');
    std::cout << "List1 after deleting 'b': ";
    list1.printAll();

    // test the copy constructor
    SinglyLinkedList list2 = list1;
    std::cout << "List2 (copy of list1): ";
    list2.printAll();

    // test the assignment operator overloading
    SinglyLinkedList list3;
    list3 = list1;
    std::cout << "List3 (copy of list1 using assignment operator overloading): ";
    list3.printAll();

    return 0;
}

