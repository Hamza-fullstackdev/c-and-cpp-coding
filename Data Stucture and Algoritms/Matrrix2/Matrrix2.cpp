#include<iostream>
using namespace std;

class Matrix
{
public:
    Matrix(const int row, const int col);            // parametric constructor
    void takeInput();                                // take input from the user and store in the matrix
    void showAdditionResult(const Matrix& m2);       // show addition result if addition is possible
    void showMultiplicationResult(const Matrix& m2); // show multiplication result if multiplication is possible
    Matrix(const Matrix& m);                         // Copy Constructor
    Matrix& operator=(const Matrix& m);              // assignment operator overloaded
    ~Matrix();                                       // destructor
    void printMatrix();
    void copyContent(const Matrix& m);

private:
    int rows;
    int cols;
    int** matrix;
};


Matrix::Matrix(const int row, const int col) {
    rows = row;
    cols = col;
    matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
}
void Matrix::takeInput() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at row " << i << " and column " << j;
            cin >> matrix[i][j];
        }
    }
}
Matrix& Matrix::operator=(const Matrix& m) {
    if (this != &m) {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;

        rows = m.rows;
        cols = m.cols;
        matrix = new int* [rows];
        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = m.matrix[i][j];
            }
        }
    }
    return *this;
}

void Matrix::showAdditionResult(const Matrix& m2) {
    if (rows != m2.rows || cols != m2.cols) {
        cout << "Addition not possible" << endl;
        return;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] += m2.matrix[i][j];
        }
    }
    cout << "Addition result: " << endl;
    printMatrix();
}
void Matrix::showMultiplicationResult(const Matrix& m2) {
    if (cols != m2.rows) {
        cout << "Multiplication not possible" << endl;
        return;
    }
    int** result = new int* [rows];
    for (int i = 0; i < rows; i++) {
        result[i] = new int[m2.cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m2.cols; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < m2.cols; j++) {
            for (int k = 0; k < cols; k++) {
                result[i][j] += matrix[i][k] * m2.matrix[k][j];
            }
        }
    }
    std::cout << "Multiplication result";
    for (int j = 0; j < m2.cols; j++) {
        for (int k = 0; k < cols; k++) {
            cout << result[j][k]<<" ";
        }
        cout << endl;
    }
}
void Matrix::printMatrix() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Matrix::copyContent(const Matrix& m) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = m.matrix[i][j];
        }
    }
}


    Matrix::Matrix(const Matrix & m) {
    rows = m.rows;
    cols = m.cols;
    matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = m.matrix[i][j];
        }
    }
}

    Matrix::~Matrix() {
        for (int i = 0; i < rows; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

int main() {
    int row, col;
    cout << "index" << "Enter number of rows for matrix 1: ";
    cin >> row;
    cout << "index" << "Enter number of columns for matrix 1:";
    cin >> col;
    Matrix m1(row, col);
    m1.takeInput();
    cout << "Enter number of rows for matrix 2: ";
    cin >> row;
    cout << "Enter number of columns for matrix 2: ";
    cin >> col;
    Matrix m2(row, col);
    m2.takeInput();

    m1.showAdditionResult(m2);
    m1.showMultiplicationResult(m2);

    return 0;
}
