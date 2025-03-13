/*Write a program to print the area of a rectangle by creating a class named 'Area' having 
two functions. First function named as 'setDim' takes the length and breadth of the rectangle 
as parameters and the second function named as 'getArea' returns the area of the rectangle.
 Length and breadth of the rectangle are entered through keyboard.
*/

#include<iostream>
using namespace std;

class Area{
    public:
        void setDim(int length,int breadth);
        int getArea();
};

void Area::setDim(int length, int breadth){
    cout<<"The arae of a rectangle is= "<<length+breadth<<endl;
}

int Area::getArea(){
    int length,breadth;
    cout<<"Enter the length of a rectangle= ";
    cin>>length;
    cout<<"Enter the breadth of a rectangle= ";
    cin>>breadth;
    return length+breadth;
}
int main(){
    Area area;
    area.setDim(3,4);
    int y=area.getArea();
    cout<<y;
}