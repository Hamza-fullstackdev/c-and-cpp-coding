#include<iostream>
using namespace std;

class Distance{
	private:
		float feet;
		float inch;
	public:
		void setData(){
			cout<<"Enter the Feet data= "<<endl;
			cin>>feet;
			cout<<"Enter the Inches data= "<<endl;
			cin>>inch;
		}
		void sumData(Distance obj1,Distance obj2){
			float sampleFeet;
			float sampleInch;
			sampleFeet=obj1.feet+obj2.feet;
			sampleInch=obj1.inch+obj2.inch;
			feet=sampleFeet+(sampleInch/12);
			inch=sampleInch%12;
		}
		void displayData(){
			cout<<"The feet is "<<feet<<endl;
			cout<<"The inches is "<<inch<<endl<<endl;
		}
};

int main(){
	Distance obj1,obj2,obj3;
	obj1.setData();
	obj2.setData();
	obj3.sumData(obj1,obj2);
	obj3.displayData();
}
