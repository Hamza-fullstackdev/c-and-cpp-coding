#include<iostream>
using namespace std;

class Rectangle{
	float length,width;
	public:
		void setlength(float);
		void setwidth(float);
		float perimeter();
		float area();
		void show();
};

void Rectangle::setlength(float len){
	length=len;
}

void Rectangle::setwidth(float wid){
	width=wid;
}

float Rectangle::perimeter(){
	float perimeter=(length+width)*2;
	return perimeter;
}

float Rectangle::area(){
	float area=length+width;
	return area;
}

void Rectangle::show(){
	cout<<"The length of a Rectangle is "<<length<<endl;
	cout<<"The Width of a Rectangle is "<<width;
}


int main(){
	//Creating Object 1 
	Rectangle obj1;
	obj1.setlength(5);
	obj1.setwidth(2.5);
	cout<<"The perimeter of a Rectangle is "<<obj1.perimeter()<<endl;
	cout<<"The Area of a Rectangle is "<<obj1.area()<<endl;
	obj1.show();
	// Creating object 2
	cout<<"\n\n\nShowing the second object data"<<endl<<endl;
	Rectangle obj2;
	obj2.setlength(5);
	obj2.setwidth(18.9);
	cout<<"The perimeter of a Rectangle is "<<obj2.perimeter()<<endl;
	cout<<"The Area of a Rectangle is "<<obj2.area()<<endl;
	obj2.show();
	if(obj1.area()==obj2.area()){
		cout<<"\n\nBoth Area is same ";
	}else{
		cout<<"\n\nBoth Area are diffrent";
	}
}

