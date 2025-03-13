#include<iostream>
using namespace std;

class Vector {
public:
    Vector() {
        numbers = new int[0];
        size = 0;
        elements = 0;
    }
    Vector(const int size) {
        this->size = size;
        elements = size;
        numbers = new int[size];
    }
    Vector(const Vector& vect) {
        size = vect.size;
        elements = vect.elements;
        numbers = new int[size];
        for (int i = 0; i < size; i++) {
            numbers[i] = vect.numbers[i];
        }
    }
    Vector& operator=(const Vector& vect) {
        if (this != &vect) {
            delete[] numbers;
            size = vect.size;
            elements = vect.elements;
            numbers = new int[size];
            for (int i = 0; i < size; i++) {
                numbers[i] = vect.numbers[i];
            }
        }
        return *this;
    }
    void insert(const int num) {
        int* newNumbers = new int[size + 1];
        for (int i = 0; i < size; i++) {
            newNumbers[i] = numbers[i];
        }
        newNumbers[size] = num;
        size++;
        elements++;
        delete[] numbers;
        numbers = newNumbers;
    }
    bool remove(const int num) {
        for (int i = 0; i < elements; i++) {
            if (numbers[i] == num) {
                for (int j = i; j < elements - 1; j++) {
                    numbers[j] = numbers[j + 1];
                }
                elements--;
                return true;
            }
        }
        return false;
    }
    bool search(const int num) const {
        for (int i = 0; i < elements; i++) {
            if (numbers[i] == num) {
                return true;
            }
        }
        return false;
    }
    void printAllValues() const {
        for (int i = 0; i < elements; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
    }
    ~Vector() {
        delete[] numbers;
    }

private:
    int* numbers;
    int size;
    int elements;
};


int main() {
    Vector v1;
    v1.insert(5);
    v1.insert(10);
    v1.insert(15);
    v1.printAllValues();

    Vector v2(3);
    v2.insert(1);
    v2.insert(2);
    v2.insert(3);
    v2.printAllValues();

    Vector v3 = v1;
    v3.printAllValues();

    Vector v4;
    v4 = v2;
    v4.printAllValues();

    v1.remove(5);
    v1.printAllValues();

    cout << v1.search(5) << endl;
    cout << v1.search(10) << endl;

    return 0;
}

