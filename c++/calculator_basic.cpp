#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"Enter the Number of a function to run it"<<endl<<endl;
cout<<"******************** Calculator ******************\n"; 

cout<<"1: Division"<<endl; 
cout<<"2: Multiplication"<<endl; 
cout<<"3: Subtraction"<<endl; 
cout<<"4: Addition"<<endl; 
cout<<"5: Exponent"<<endl; 
cout<<"6: Square root"<<endl; 
int c,b,a;
float d;
cout<<"Enter the function that you want to perform : "; 
cin>>c;
switch (c)
{
case 1:
    cout<<"Enter the number= ";
    cin>>b;
    cout<<"Enter the second number= ";
    cin>>a;
    d=b/a;
    cout<<"The Division of a number is= "<<d;
    break;
case 2:
    cout<<"Enter the number= ";
    cin>>b;
    cout<<"Enter the second number= ";
    cin>>a;
    d=b*a;
    cout<<"The Multiplication of a number is= "<<d;
    break;
case 3:
    cout<<"Enter the number= ";
    cin>>b;
    cout<<"Enter the second number= ";
    cin>>a;
    d=b-a;
    cout<<"The subtraction of a number is= "<<d;
    break;
case 4:
    cout<<"Enter the number= ";
    cin>>b;
    cout<<"Enter the second number= ";
    cin>>a;
    d=b+a;
    cout<<"The Addition of a number is= "<<d;
    break;
case 5:
    cout<<"Enter the number= ";
    cin>>b;
    cout<<"Enter the second number= ";
    cin>>a;
    d=b%a;
    cout<<"The Exponent of a number is= "<<d;
    break;
case 6:
    cout<<"Enter the number= ";
    cin>>b;
    d=sqrt(b);
    cout<<"The square root of a number is= "<<d;
    break;
    
default:
	cout<<"Invalid number";
    break;
}
}
