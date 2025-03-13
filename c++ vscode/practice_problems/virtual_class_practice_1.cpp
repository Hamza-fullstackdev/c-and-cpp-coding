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
// 
class employee_name:virtual public employee{
	public:
		void empName(string name){
			cout<<"The name of a employee is "<<name<<endl;
		}
};
// 
class employee_salary:virtual public employee{
	public:
		void empSalary(int salary){
			cout<<"The salary of an employee is "<<salary<<endl;
		}
};
// 
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