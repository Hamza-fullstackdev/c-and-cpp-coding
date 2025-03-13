#include <iostream>
using namespace std;

class Matrix {
    private:
        int rows, cols;
        int** arr;
    public:
        Matrix(int r, int c) {
            rows = r;
            cols = c;
            
            
            // Rows and Column dynammically added code in (next three lines).
            arr = new int*[rows];
            for(int i = 0; i < rows; i++) {
                arr[i] = new int[cols];
            }
        }

        void inputdata() {
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                	//Getting values from user
                    cin >> arr[i][j];
                }
            }
        }


        Matrix operator+(const Matrix& other) { //Operator ovrloading of "+" operator
		// Declaring another object, is mein addition kr k answer store krein gay(The next line)
            Matrix result(rows, cols);
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                	// Arrays addition
                    result.arr[i][j] = arr[i][j] + other.arr[i][j];
                }
            }
            return result;
        }

        Matrix operator*(const Matrix& other) {
        			// Declaring another object, is mein Multiplication kr k answer store krein gay(The next line)
            Matrix result(rows, other.cols); //Constructor call kia hai object bna k or arguments send kiay hain
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < other.cols; j++) {
                    for(int k = 0; k < cols; k++) {
                    	// Multiplication kr k os kay answers ko add kr k result array mein store krwaya hai
                        result.arr[i][j] += arr[i][k] * other.arr[k][j];
                    }
                }
            }
            return result;
        }
        void printdata() {
        	//Print krwanay k lia
            for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }
};

int main() {
    int r1, c1, r2, c2;
    cout  <<"Enter the number of rows and columns for the first matrix: ";
	cin >> r1 >>c1;
	
	
	//Row1 or Column1 ka data user se lia hai or next line p constructor(Jo sab se pehla function bnaya hai class mein) ko call kr k,donon values as a parameter send ki hain
    Matrix matrix1(r1, c1);
    cout << "Enter the elements of the first matrix: ";
    
	
	// Matrix1 ka data user se lene k lia
    matrix1.inputdata();
    cout << "The first matrix is: " << endl;
    
	
	//Matrix1 print krwaya hai
    matrix1.printdata();

    cout << "Enter the number of rows and columns for the second matrix: ";
	cin >> r2 >>c2;
	
	
	//Row2 or Column2 ka data user se lia hai or next line p constructor(Jo sab se pehla function bnaya hai class mein) ko call kr k,donon values as a parameter send ki hain
    Matrix matrix2(r2, c2);
    
    
   	// Matrix2 ka data user se lene k lia
    cout << "Enter the elements of the second matrix: ";
    matrix2.inputdata();
    
    
	//Matrix2 print krwaya hai
	cout << "The second matrix is: " << endl;
    matrix2.printdata();

	//Ye dekhnay k lia k kya rows and column same hain ,agar hain to hum addition krwayein gay, else hum message show krwa dein gy k "impossible to take addition of such matrixes"
	//kuon k agar matrices k rows and columns same nahi hon gay to "addition possible nahi hoti"
    if(c1 == r2) {
        cout << "The sum of the matrices is: " << endl;
        (matrix1 + matrix2).printdata();
        cout << "The product of the matrices is: " << endl;
        (matrix1 * matrix2).printdata();
    } else {
        cout << "Invalid";
    }
}
