#include<iostream>
using namespace std;

class Matrix {
private:
	int rows, cols;
	int** arr;
public:
	Matrix(int rows, int cols);
	void inputdata();
	void matrixAddition(const Matrix& otherMatrix);
	void printdata();
};

Matrix::Matrix(int r, int c) {
	rows = r;
	cols = c;
	arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}
}
void Matrix::inputdata() {
	cout << "Enter the data: ";
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}
}

void Matrix::matrixAddition(const Matrix& otherMatrix) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << arr[i][j] + otherMatrix.arr[i][j] << endl;
		}
	}
}


int main() {
	int row, col;
	cout << "Enter the number of rows: ";
	cin >> row;
	cout << "Enter the number of columns";
	cin >> col;
	Matrix Matrix1(row, col);
	if (row == col) {
		Matrix1.inputdata();
	}

	Matrix Matrix2(row, col);
	if (row == col) {
		Matrix1.inputdata();
	}
	Matrix1.matrixAddition(Matrix2);
}