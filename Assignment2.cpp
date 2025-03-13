#include<iostream>
using namespace std;

class Distance{
	private:
		int feet;
		float inch;
	public:
		void setData(){
			cout<<"Enter the Feet data= "<<endl;
			cin>>feet;
			cout<<"Enter the Inches data= "<<endl;
			cin>>inch;
		}
		Distance sumData(Distance obj){
			Distance obj4;
			obj4.feet=feet+obj.feet;
			obj4.inch=inch+obj.inch;
			return obj4;
		}
		void displayData(){
			cout<<"The feet is "<<feet<<endl;
			cout<<"The inches is "<<inch<<endl<<endl;
		}
};

int main(){
	Distance obj1,obj2,obj3;
	cout<<"Enter First data"<<endl<<endl;
	obj1.setData();
	cout<<"Enter Second data"<<endl<<endl;
	obj2.setData();
	obj3=obj1.sumData(obj2);
	cout<<"************The entered first data is**************"<<endl<<endl;
	obj1.displayData();
	cout<<"************The entered second data is**************"<<endl<<endl;
	obj2.displayData();
	cout<<"**************The feet and inches after sum is*****************"<<endl<<endl;
	obj3.displayData();
}
