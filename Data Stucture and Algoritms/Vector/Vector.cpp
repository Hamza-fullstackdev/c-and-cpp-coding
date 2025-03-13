
#include<iostream>
using namespace std;

class Vector {

public:
    Vector();	// default constructor
    Vector(const int size);	// parametric constructor
    Vector(const Vector& vect);	// copy constructor
    Vector& operator=(const Vector& vect);	// assignment operator overloaded
    void insert(const int num);	// function to add value to end of vector
    bool remove(const int num);	// function to remove value from the vector
    bool search(const int num) const;	// function to search for value in the vector
    void printAllValues() const;
    ~Vector();	// destructor
private:
    int* numbers;
    int size;
    int elements;

}
Vector::Vector() : numbers(nullptr), size(0), elements(0) {}
Vector::Vector(const int size) : size(size), elements(0) {
    numbers = new int[size];
}
Vector::Vector(const Vector& vect) : size(vect.size), elements(vect.elements) {
    numbers = new int[size];
    for (int i = 0; i < elements; i++) {
        numbers[i] = vect.numbers[i];
    }
}

Vector& Vector::operator=(const Vector& vect) {
    if (this != &vect) {
        delete[] numbers;
        size = vect.size;
        elements = vect.elements;
        numbers = new int[size];
        for (int i = 0; i < elements; i++) {
            numbers[i] = vect.numbers[i];
        }
    }
    return *this;
}
void Vector::insert(const int num) {
    if (elements == size) {
        int* temp = new int[size * 2];
        for (int i = 0; i < elements; i++) {
            temp[i] = numbers[i];
        }
        size *= 2;
        delete[] numbers;
        numbers = temp;
    }
    numbers[elements++] = num;
}
