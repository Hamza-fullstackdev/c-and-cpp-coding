
/* write a program that has a class named student with varaiable 'name' and a integer
variable 'roll_no'.Assign values to them as roll_no to 2 and name as "john" by creating
object of student*/ 


#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    // char name[20];
    string name;
    int roll_no;
};

int main(){
    class student hamza;
    // strcpy(hamza.name,"john");
    hamza.name="john";
    hamza.roll_no=34;
    cout<<hamza.name<<endl<<hamza.roll_no;
}