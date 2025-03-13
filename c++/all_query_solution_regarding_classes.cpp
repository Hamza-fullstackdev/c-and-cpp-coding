
// Case1: This is a case one of the query in which i am try to access the private member of the class in another inherited class
//      					solution: I am fail to do this
//     					    Reason: we cannot get access to the private member in inheritance class,in any visibility_mode.

#include<iostream>
using namespace std;

class employee{
	string name;
	int age;
	int marks;
	public:
		void getdata();
		void displaydata();
};

//class employee_2:public employee{
//	public:
//		void displaydata();
//};

void employee::getdata(){
	cout<<"Enter the name of a employee= ";
	cin>>name;
	cout<<"Enter the age of an employee= ";
	cin>>age;
	cout<<"Enter the marks of an employee= ";
	cin>>marks;
}

//void employee::displaydata(){
//	cout<<name<<endl<<age<<endl<<marks;
//}

int main(){
	employee s1;
	s1.getdata();
	s1.displaydata();
}






// Case 2: This is the further explanation of case1
// we cannot get access to the private member in inheritance ,in any visibility_mode, but if we wnnt to private our data and also want to inherit it
// 	 try protected in base class it not only private your data but also give access to inherit the data(variables) 
// Below is the example of the above query:


#include<iostream>
using namespace std;

class employee{
	protected:
		string name;
		int age;
		int marks;
		public:
			void getdata();
};

class employee_2:public employee{
	public:
		void displaydata();
};


void employee_2::displaydata(){
	cout<<name<<endl<<age<<endl<<marks<<endl;
}

void employee::getdata(){
	cout<<"Enter the name of a employee= ";
	cin>>name;
	cout<<"Enter the age of an employee= ";
	cin>>age;
	cout<<"Enter the marks of an employee= ";
	cin>>marks;
}




int main(){
	employee_2 s1;
	s1.getdata();
	s1.displaydata();
}




// Case3: Can i get access to change my protected data from the main function as we change it in public mode?
//                solution: No we cannot
//                Reason: As we know that protected mode, privates our data but we also inherit it, so if protected mode private our data than we
//                        have no right/access to change our protected data from the main function.
//          Below is an example of this case: 
#include<iostream>
using namespace std;

class employee{
//	public:
	protected:
		string name;
		int age;		
};

int main(){
	employee hamza;
	hamza.name="Hamza";
	hamza.age=19;
	cout<<hamza.name<<endl;
	cout<<hamza.age;
}
