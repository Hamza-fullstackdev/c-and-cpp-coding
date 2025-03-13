#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    ~DoublyLinkedList() {
        Node* curr = head;
        while (curr != NULL) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    DoublyLinkedList(const DoublyLinkedList& other) {
        head = NULL;
        tail = NULL;
        Node* curr = other.head;
        while (curr != NULL) {
            push_back(curr->data);
            curr = curr->next;
        }
    }

    DoublyLinkedList& operator=(const DoublyLinkedList& other) {
        if (this != &other) {
            Node* curr = head;
            while (curr != NULL) {
                Node* temp = curr;
                curr = curr->next;
                delete temp;
            }
            head = NULL;
            tail = NULL;
            curr = other.head;
            while (curr != NULL) {
                push_back(curr->data);
                curr = curr->next;
            }
        }
        return *this;
    }

    void push_front(int d) {
        Node* newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void push_back(int d) {
        Node* newNode = new Node(d);
        if (tail == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front() {
        if (head == NULL) {
            return;
        }
        Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        } else {
            tail = NULL;
        }
        delete temp;
    }

    void pop_back() {
        if (tail == NULL) {
            return;
        }
        Node* temp = tail;
        tail = tail->prev;
        if (tail != NULL) {
            tail->next = NULL;
        } else {
            head = NULL;
        }
        delete temp;
    }

    void insert(int pos, int d) {
        Node* newNode = new Node(d);
        if (pos == 0) {
            push_front(d);
            return;
        }
        Node* curr = head;
        for (int i = 0; i < pos - 1; i++) {
            if (curr == NULL) {
                delete newNode;
                return;
            }
            curr = curr->next;
        }
        if (curr == NULL) {
            delete newNode;
            return;
        }
        newNode->next = curr->next;
        newNode->prev = curr;
        if (curr->next != NULL) {
            curr->next->prev = newNode;
        } else {
            tail = newNode;
        }
        curr->next = newNode;
    }

void remove(int pos) {
    if (head == NULL) {
        return;
    }
    if (pos == 0) {
        pop_front();
        return;
    }
    Node* curr = head;
    for (int i = 0; i < pos; i++) {
        if (curr == NULL) {
            return;
        }
        curr = curr->next;
    }
    if (curr == NULL) {
        return;
    }
    curr->prev->next = curr->next;
    if (curr->next != NULL) {
        curr->next->prev = curr->prev;
    } else {
        tail = curr->prev;
    }
    delete curr;
}
};


// Define the DoublyLinkedList and Node classes here...



