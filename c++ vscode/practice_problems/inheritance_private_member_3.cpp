#include<iostream>
using namespace std;

class numbers{
    private:
    int n,m;
    public:
    int getfirdata();
    int getsecdata();
};

int numbers::getfirdata(){
    cout<<"Enter the first number= ";
    cin>>n;
    return n;
}

int numbers::getsecdata(){
    cout<<"Enter the second number= ";
    cin>>m;
    return m;
}

class result: private numbers{
    int res;
    public:
    void showresult();
};

void result::showresult(){
    res=getfirdata()-getsecdata();
    cout<<"The subtraction of a number is "<<res;
}

int main(){
    result s1;
    s1.showresult();
}