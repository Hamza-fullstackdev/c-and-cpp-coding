

#include<iostream>
using namespace std;

class Stack {
public:
	Stack();
    const static int size=20;
	bool isfull() const;
	bool isempty() const;
	bool push(const char val);
	bool pop(const char& val);
private:
	int top;
	char array[size];
};

Stack::Stack(){
	top =-1;
}
bool Stack::isfull() const{
	return size - 1;
}
bool Stack::isempty() const {
	return top == -1;
}
bool Stack::push(const char val) {
	bool result = false;
	if (!isfull()){
		array[++top] = val;
		result = true;
	}
	return result;
}
bool Stack::pop(const char& val){
	bool result = false;
	if (!isempty()) {
		top--;
		result = true;
	}
	return result;
}

int main() {
	Stack myFirstStackProgram;
	int size;
	char characters;
	cout << "Enter the Size of the Stack: ";
	cin >> size;
	while (size <= 20 && characters == 'q')
	{
		cin >> characters;
		
		myFirstStackProgram.push(characters);
	}
//f (size  20) {
		//r (int i = 0; i < size; i++) {
		//out << "Enter "<< i << " character" << endl;
			//n >> characters;
			//FirstStackProgram.push(characters);
		//
	//
}