#include<iostream>
using namespace std;

class time{
	int hours,minutes;
	public:
		void settime(int h,int m){
			hours=h;
			minutes=m;
		}
		void showtime(){
			cout<<hours<<endl<<minutes;
		}
		time sum(time obj){
			time cal;
			cal.hours=hours+obj.hours;
			cal.minutes=minutes+obj.minutes;
			return cal;
		}
};

int main(){
	time obj1,obj2,obj3;
	obj1.settime(3,4);
	obj2.settime(5,6);
	obj3=obj1.sum(obj2);
	obj3.showtime();
}
