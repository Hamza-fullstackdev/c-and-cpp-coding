#include<iostream>
using namespace std;

class shop{
	char itemName[20];
	int itemId;
	public:
		void getdata(void);
		void displaydata(void);
};

void shop::getdata(){
	cout<<"Enter the id of a product= ";
	cin>>itemId;
	cout<<"Enter the name of a product= ";
	cin>>itemName;
}

void shop::displaydata(){
	cout<<"The id of a product is "<<itemId<<" and name of a product is "<<itemName<<endl;
}

int main(){
	class shop s1;
	s1.getdata();
	s1.displaydata();
}
