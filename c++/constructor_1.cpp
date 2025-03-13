#include<iostream>
using namespace std;

class hamza{
	public:
		hamza(void);
		void displaydata(){
			cout<<"I am also running";
		}
};

hamza::hamza(void){
	cout<<"i am a constructor"<<endl;
}

int main(){
	hamza s1;
	s1.displaydata();
}
