#include<iostream>
using namespace std;

class Distance{ 
	int feet;
	float inches;
	public:
		void set(int f,int i){
			feet=f;
			inches=i;
		}
		Distance add(Distance obj){
			Distance other;
			other.feet=feet+obj.feet;
			other.inches=inches+obj.inches;
			return other;
		}
		void disp(){
			cout<<"Feet is "<<feet<<endl;
			cout<<"Inches is "<<inches;
		}
};

int main(){
	Distance obj1,obj2,obj3;
	obj1.set(12,32);
	obj2.set(11,22);
	obj3=obj1.add(obj2);
	obj3.disp();
}
