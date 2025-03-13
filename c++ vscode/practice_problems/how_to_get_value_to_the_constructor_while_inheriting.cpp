
#include<iostream>
using namespace std;

class A{
    int num1,num2;
    public:
    A(int a, int b){
        num1=a;
        num2=b;
        cout<<"Constructor one is running"<<endl;
        cout<<"The value is "<<num1<<endl<<"The value is "<<num2<<endl;
        cout<<"The sum is "<<num1+num2<<endl;
    }
};

class B{
    int num1,num2;
    public:
    B(int c, int d){
        num1=c;
        num2=d;
        cout<<"Constructor Two is running"<<endl;
        cout<<"The value is "<<num1<<endl<<"The value is "<<num2<<endl;
        cout<<"The sum is "<<num1+num2<<endl;
    }
};

class C: public A, public B{        // We can change order of displaying values by changing classes position
// class C: public B, public A{      // Like this
    int num3,num4;
    public:
    C(int a, int b,int c,int d,int e, int f): A(a,b),B(c,d){ //There we are assigning values to all constuctors
        num3=e;
        num4=f;
        cout<<"The constructor three is running"<<endl;
        cout<<"The value is "<<num3<<endl<<"The value is "<<num4<<endl;
        cout<<"The sum is "<<num3+num4<<endl;
    }
};

int main(){
    C constructor(1,2,3,4,5,6);
}