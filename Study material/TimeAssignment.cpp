#include<iostream>
using namespace std;

class time{
	int hours,minutes,seconds;
	public:
		void setdata(int hr,int mi,int sec){
			hours=hr;
			minutes=mi;
			seconds=sec;
		}
		time add(time obj1,time obj){
			hours=obj1.hours+obj.hours;
			minutes=obj1.minutes+obj.minutes;
			seconds=obj1.seconds+obj.seconds;
		}
		void display(){
			cout<<hours<<":"<<minutes<<":"<<seconds;
		}
};

int main(){
	time obj1,obj2,obj3;
	obj1.setdata(2,28,20);
	obj2.setdata(2,38,20);
	obj3.add(obj1,obj2);
	obj3.display();
}
