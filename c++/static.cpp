#include<iostream>
using namespace std;

class student{
	static int count;
	int marks;
	public:
		student(int marks){
			this->marks=marks;
			count++;
			cout<<"This is student "<<count<<endl;
		}
		
};

int student::count;

int main(){
	student obj(1),obj1(3),obj2(3),obj3(3),obj4(3),obj5(3),obj6(3);
}
