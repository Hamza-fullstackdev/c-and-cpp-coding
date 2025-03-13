#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE-1);
    }

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Error: Queue is full" << endl;
            return;
        }
        if (front == -1) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << value << " pushed to Queue" << endl;
    }

    bool search(int value) {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return false;
        }
        for (int i=front; i<=rear; i++) {
            if (arr[i] == value) {
                cout << value << " found in Queue" << endl;
                return true;
            }
        }
        cout << value << " not found in Queue" << endl;
        return false;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Error: Queue is empty" << endl;
            return;
        }
        int value = arr[front];
        front++;
        cout << value << " popped from Queue" << endl;
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);

    q.search(20);
    q.search(50);

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();

    return 0;
}

