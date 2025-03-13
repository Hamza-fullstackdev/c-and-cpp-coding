#include<iostream>
using namespace std;

class players{
    int n,m;
    public:
    int firstNum();
    int secondNum();
};

class shadab: public players{
    public:
    void sum();
};

int players::firstNum(){
    cout<<"Enter the first number= ";
    cin>>n;
    return n;
}
int players::secondNum(){
    cout<<"Enter the second number= ";
    cin>>m;
    return m;
}
void shadab ::sum(){
    int result=firstNum()+secondNum();
    cout<<"The sum of a number is "<<result;
}


int main()
{
    shadab s1;
    s1.sum();
}