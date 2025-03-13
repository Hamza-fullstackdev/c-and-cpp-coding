#include<iostream>
#include<math.h>
using namespace std;
int main(){
cout<<"Enter the Number of a function to run it"<<endl<<endl;
cout<<"******************** Calculator ******************\n"; 
cout<<"---------------------------------------------------\n"; 
cout<<"Operations\t"<<"\tTrigonometric Functions"<<"\t\tLogarithmic Functions\n"; 
cout<<"------------------------------------------------\n"; 
cout<<"1: Division\t\t"<<"7: Sin\t\t"<<"\t\t13: Log"<<endl; 
cout<<"2: Multiplication\t"<<"8: Cos\t\t"<<"\t\t14: Log with base 10"<<endl; 
cout<<"3: Subtraction\t\t"<<"9: Tan\t\t"<<endl; 
cout<<"4: Addition\t\t"<<"10: Inverse of Sin"<<endl; 
cout<<"5: Exponent\t\t"<<"11: Inverse of Cos"<<endl; 
cout<<"6: Square root\t\t"<<"12: Inverse of Tan"<<endl; 
cout<<"Enter the function that you want to perform : "; 
int c,b,a,e;
float d;
cout<<"Enter the number of a function= ";
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
case 7:
    cout<<"Enter the number= ";
    cin>>b;
    d=sin(b);
    cout<<"The Sin of a number is= "<<d;
    break;
case 8:
    cout<<"Enter the number= ";
    cin>>b;
    d=cos(b);
    cout<<"The Cos of a number is= "<<d;
    break;
case 9:
    cout<<"Enter the number= ";
    cin>>b;
    d=tan(b);
    cout<<"The Tangent of a number is= "<<d;
    break;
case 10:
    cout<<"Enter the number= ";
    cin>>b;
    d=asin(b);
    cout<<"The sin inverse of a number is= "<<d;
    break;
case 11:
    cout<<"Enter the number= ";
    cin>>b;
    d=acos(b);
    cout<<"The cos inverse of a number is= "<<d;
    break;
case 12:
    cout<<"Enter the number= ";
    cin>>b;
    d=atan(b);
    cout<<"The tangent inverse of a number is= "<<d;
    break;
case 14:
    cout<<"Enter the number= ";
    cin>>b;
    d=log(b);
    cout<<"The Multiplication of a number is= "<<d;
    break;
    
default:
	cout<<"Invalid number";
    break;
}
}
