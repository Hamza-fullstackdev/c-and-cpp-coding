#include<iostream>
using namespace std;

class Bata{
//	protected:
//		company="Bata";
	public:
		string company="Bata";
};

class shop_1:virtual public Bata{
	protected:
		string shoesType;
		int size;
	public:
		void displaydata(){
			cout<<"The shoestype is 'slipers' "<<endl;
			cout<<"The size available is 23,32,43"<<endl;
		}
};
class shop_2: public Bata{
	protected:
		string shoesType;
		int size;
	public:
		void showdata(){
			cout<<"The shoestype is 'chapple' "<<endl;
			cout<<"The size available is 23,32,43"<<endl;
		}
};
class mall: public shop_1,public shop_2{
	public:
		void mydata(){
			cout<<"This is my data"<<endl;
		}
};

int main(){
	mall hamzaCode;
//	cout<<hamzaCode.company<<endl;
	hamzaCode.displaydata();
	hamzaCode.showdata();
	hamzaCode.mydata();
	}
