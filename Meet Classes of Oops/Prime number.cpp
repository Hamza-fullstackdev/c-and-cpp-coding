#include<iostream>
using namespace std;
class Prime{
	private:
		int number;
		bool result;
	public:
		void setdata(int);
		bool calculation();
		void display();
};
void Prime::setdata(int n){
	number=n;
}
bool Prime::calculation(){
	if(number==0||number==1){
		result=false;
	}
	return result;
}
void Prime::display(){
	if(calculation()){
		cout<<"Prime number";
	}
	else{
		cout<<"Not am Prime number";
	}
}

int main(){
	Prime obj;
	obj.setdata(2);
	obj.display();
}


