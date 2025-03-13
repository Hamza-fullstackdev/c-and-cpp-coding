#include<iostream>
using namespace std;

class area{
    public:
        void sum(int a,int b){
            cout<<"The sum of Two numbers is "<<a+b;
        }
        int summ(){
            int l,b;
            cout<<"\n\nEnter the length= ";
            cin>>l;
            cout<<"Enter the breadth= ";
            cin>>b;
            return l*b;    
        }
};

int main(){
    area prac;
    prac.sum(3,4);
    int y=prac.summ();
    cout<<y;
}