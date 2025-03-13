#include<iostream>
using namespace std;

class student{
	static int count;
	int marks;
	public:
		student(int marks){
			this->marks=marks;
			count++;
			cout<<"This is student "<<count;
		}
		
};
int main(){
	student obj(1);
	
}
