/* Assign and print the roll number, phone number and address of two students having names
 "Sam" and "John" respectively by creating two objects of the class 'Student'.*/ 


#include<iostream>
using namespace std;

class student{
    public:
    int roll_no;
    long double phone_no;
    string adress;
};

int main(){
    student sam;
    sam.roll_no=32;
    sam.phone_no= 3323036882;
    sam.adress="Grid station Yousafwala sahiwal";
    cout<<sam.roll_no<<endl<<sam.phone_no<<endl<<sam.adress;
}