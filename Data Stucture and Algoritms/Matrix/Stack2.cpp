#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack() {
        arr = new int[MAX_SIZE];
        capacity = MAX_SIZE;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == capacity-1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Error: Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = value;
        cout << value << " pushed to Stack" << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: Stack is empty" << endl;
            return;
        }
        int value = arr[top];
        top--;
        cout << value << " popped from Stack" << endl;
    }

    void print() {
        if (isEmpty()) {
            cout << "Error: Stack is empty" << endl;
            return;
        }
        cout << "Stack Contents: ";
        for (int i=0; i<=top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.print();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}

