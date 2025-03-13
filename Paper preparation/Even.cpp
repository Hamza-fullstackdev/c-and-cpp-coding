//Create a class Even in which declare a member variable as private and 03 public methods 
//named Data, Calculate_Even and Display. Define these methods out of this class. Create 01 
//object of this class. Define a constructor of this class. Use this object to call Data to assign 
//number to variable, call Calculate_Even to calculate whether given number is Even or not and 
//call Display to show the result.

#include<iostream>
using namespace std;

class Even{
	private:
		int n;
	public:
		void Data(){
			cout<<"Enter the Number: ";
			cin>>n;
		}
		int Calculate_even(){
			bool even;
			if(n%2==0){
				even=true;
			}else{
				even=false;
			}
			return even;
		}
		void Display(){
			if(Calculate_even()){
				cout<<"Number is Even";
			}
			else{
				cout<<"Number is odd";
			}
		}
};
int main(){
	Even obj;
	obj.Data();
	obj.Display();
}
