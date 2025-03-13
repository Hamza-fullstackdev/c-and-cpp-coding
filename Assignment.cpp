#include<iostream>
#define PI 3.1416
using namespace std;

class Shape{
	protected:
		int Width=2;
		int Length=4;
		int Height=6;
};

class Rectangle:public Shape{
	public:
		int areaOfRectangle(){
			return (Width/2)*Height;
		}
};
class Triangle:public Shape{
	public:
		int perimeterOfTriangle(){
			return Width+Length+Height;
		}
};
class Circle: public Shape{
	public:
		int areaOfCircle(){
			return PI*Height*Height;
		}
};

int main(){
	Rectangle c1;
	Triangle c2;
	Circle c3;
	cout<<"The area of a Rectangle is "<<c1.areaOfRectangle()<<endl;
	cout<<"The area of a Triangle is "<<c2.perimeterOfTriangle()<<endl;
	cout<<"The area of a Circle is "<<c3.areaOfCircle()<<endl;
}
