#include<iostream>
using namespace std;

class construct{
    public:
    construct();
};


class construct_2:public construct{
    public:
    construct_2();
};

construct::construct(){
    cout<<"Constructor 1 is running"<<endl;
}

construct_2::construct_2(){
    cout<<"The second constructor is running";
}

int main(){
//    construct s2;
    construct_2 s1;
}
