/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by 
creating a class named 'Triangle' with a function to print the area and perimeter.*/

#include<iostream>
using namespace std;

class Triangles{
    public:
    void print_sum(int a,int b,int c);
    void print_perimeter(int a, int b,int c);
};

void Triangles::print_sum(int a,int b,int c){
    cout<<a+b+c<<endl;
}

void Triangles::print_perimeter(int a, int b,int c){
    cout<<(a+b+c)/2;
}

int main(){
    Triangles area;
    area.print_sum(3,4,5);
    area.print_perimeter(3,4,5);
}