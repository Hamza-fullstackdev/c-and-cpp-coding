#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() { top = NULL; }
    void push(int x);
    int pop();
    bool isEmpty();
    void display();
};

void Stack::push(int x) {
    Node* t = new Node;
    if (t == NULL) {
        cout << "Stack is full" << endl;
    } else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int Stack::pop() {
    int x = -1;
    if (top == NULL) {
        cout << "Stack is empty" << endl;
    } else {
        Node* t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

bool Stack::isEmpty() {
    return top == NULL;
}

void Stack::display() {
    Node* p = top;
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    cout << s.pop() << " is popped" << endl;
    s.display();
    return 0;
}

