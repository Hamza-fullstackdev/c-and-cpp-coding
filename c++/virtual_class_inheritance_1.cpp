
// 		In Virtual base class we have to write "virtual" keyword if one variable is inherited in two or more derived classes
//      In this program if we want to access the hamza.showSerialNo() without using virtual keyword this will through an error because serial_no is
//      inherited in two more classes so that confuse the compiler that how he get access to the hamza.showSerialNo().

#include<iostream>
using namespace std;

class employee{
	protected:
		int serial_no=1;
	public:
		void showSerialNo(){
			cout<<"The serial no of a employee is "<<serial_no<<endl;
		}
};
// writing virtual to get access to the serial_no
class employee_name:virtual public employee{
	public:
		void empName(string name){
			cout<<"The name of a employee is "<<name<<endl;
		}
};
// writing virtual to get access to the serial_no
class employee_salary:virtual public employee{
	public:
		void empSalary(int salary){
			cout<<"The salary of an employee is "<<salary<<endl;
		}
};

class show:public employee_name,public employee_salary{
	public:
		void result(){
			cout<<"This was the result";
		}
};
// 
int main(){
	show hamza;
	hamza.showSerialNo(); // THIS PROGRAM WILL THROUGH AN ERROR, IF WE REMOVE "VIRTUAL" KEYWORD FROM IT
	hamza.empName("Hamza");
	hamza.empSalary(20);
	hamza.result();
}
