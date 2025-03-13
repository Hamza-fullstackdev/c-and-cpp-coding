////Define a class Flight in C++ with following description:
//Private Members
//A data member Flight number of type integer
//A data member Destination of type string
//A data member Distance of type float
//A data member Fuel of type float
//A member function CALFUEL() to calculate the value of Fuel as per the following criteria:
//Distance <=1000 then Fuel = 500 >=1000 and <=2000 then Fuel = 1100
//Distance > 2000 then Fuel = 2200
//Public Members
//A function FEEDINFO() to allow user to enter values for Flight Number, Destination, 
//Distance & call function CALFUEL() to calculate the quantity of Fuel
//A function SHOWINFO() to allow user to view the content of all the data members

#include<iostream>
using namespace std;

class Flight{
	private:
		int FlightNumber;
		string Destination;
		float Distance,Fuel;
	public:
		void FEEDINFO(){
			cout<<"Enter the Flight Number: ";
			cin>>FlightNumber;
			cout<<"Enter the Destination: ";
			cin>>Destination;
			cout<<"Enter the Distance: ";
			cin>>Distance;
		}
		int CALFUEL(){
			if(Distance<=1000){
				Fuel=500;
			}
			else if(Distance>=100&&Distance<=2000){
				Fuel=1100;
			}
			else{
				Fuel=2000;
			}
			return Fuel;
		}
		void SHOWINFO(){
			cout<<"Flight Number: "<<FlightNumber<<endl;
			cout<<"Destination: "<<Destination<<endl;
			cout<<"Distance: "<<Distance<<endl;
		}
};
int main(){
	Flight obj;
	obj.FEEDINFO();
	cout<<"The Tottal Fuel is: "<<obj.CALFUEL()<<endl;
	obj.SHOWINFO();
}
