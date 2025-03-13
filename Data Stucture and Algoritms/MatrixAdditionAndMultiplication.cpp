class Matrix{
	private:
		int rows,cols;
		int **arr;
	public:
		Matrix(int r,int c){
			rows=r;
			cols=c;
			arr= new int *[rows];
			
			for(int i=0;i<rows;i++){
				arr[i]=new int [cols];
			}
		}
		void inputdata(){
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					cout<<"Enter the ("<<i<<","<<j<<")"<<" elements: ";
					cin>>arr[i][j];
				}
			}
		}
		Matrix operator+(const Matrix &othermatrix){
			Matrix resultAddition(rows,cols);
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					resultAddition.arr[i][j]=arr[i][j]+othermatrix.arr[i][j];
				}
			}
			return resultAddition;
		}
		Matrix operator*(const Matrix &othermatrix){
			Matrix resultMultiplication(rows,cols);
			for(int i=0;i<rows;i++){
				for(int j=0;j<cols;j++){
					for(int k=0;k<cols;k++){
						resultMultiplication.arr[i][j]=resultMultiplication.arr[i][j]+arr[i][k]+othermatrix.arr[k][j];
					}
				}
			}
			return resultMultiplication;
		}
		~Matrix(){
			delete []arr;
		}
		void print(){
			for(int i = 0; i < rows; i++) {
                for(int j = 0; j < cols; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
		}
};

int main(){
	int row1,row2,col1,col2;
	cout<<"Enter the Number of rows for matrix1: ";
	cin>>row1;
	cout<<"Enter the Number of rows for matrix1: ";
	cin>>row2;
	
	Matrix Matrix1(row1,col1);
	cout << "Enter the elements of the first matrix: \n";
    Matrix1.inputdata();
    cout<<"\n Your entered first matrix is :";
    Matrix1.print();
    
	cout<<"Enter the Number of rows for matrix2: ";
	cin>>col1;
	cout<<"Enter the Number of rows for matrix2: ";
	cin>>col2;
	Matrix Matrix2(row2,col2);
	cout << "Enter the elements of the second matrix: \n";
    Matrix2.inputdata();
    cout<<"\n Your entered second matrix is :";
    Matrix2.print();
    
    if(col1 == row2) {
        cout << "The sum of the matrices is: " << endl;
        (Matrix1 + Matrix2).print();
        cout << "The product of the matrices is: " << endl;
        (Matrix1 * Matrix2).print();
    } else {
        cout << "Cannot be Add And Multipli Matrices because of wronge number of rows and columns";
    }
}
