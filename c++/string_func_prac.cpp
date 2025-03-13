#include<iostream>
#include<string.h>
using namespace std;
class simple{
    private:
    int n,m;
    public:
    void arithmatic(int,int);
};

void simple::arithmatic(int a,int b){
    n=a;
    m=b;
    cout<<"\n\nThe sum of a number is "<<n+m<<endl;
    cout<<"The sub of a number is "<<n-m<<endl;
    cout<<"The mul of a number is "<<n*m<<endl;
    cout<<"The div of a number is "<<n/m<<endl;
}
int main(){
     char name[300];
     strcpy(name,"hamza is a good person");
     strcat(name," and he is live in sahiwal");
     cout<<name;
     simple arith;
     arith.arithmatic(99,88);
}
