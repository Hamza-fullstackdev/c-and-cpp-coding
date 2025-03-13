#include<iostream>
using namespace std;

class firstNum{
    private:
    int n;
    public:
    int getfirdata();
};

int firstNum::getfirdata(){
    cout<<"Enter the first number= ";
    cin>>n;
    return n;
}

class secondNum:public firstNum{
    private:
    int m;
    public:
    int getsecdata();
};

int secondNum::getsecdata(){
    cout<<"Enter the second number= ";
    cin>>m;
    return m;
}

class result:public secondNum{
    private:
    int res;
    public:
    int getresult();
};

int result::getresult(){
    res=getfirdata()+getsecdata();
    return res;
}

class show: public result{
    public:
    void displayData();
};

void show::displayData(){
    cout<<getresult();
}

int main(){
    show s1;
    s1.displayData();
}