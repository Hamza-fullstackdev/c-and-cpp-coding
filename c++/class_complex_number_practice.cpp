 #include<iostream>
 using namespace std;
 class iota{
 	int e,f,g,h;
 	public:
 		void getdata(int a, int b);
 		void getdata2(int x,int y);
 		void sumdata();
 };
 
 void iota::getdata(int a,int b){
 	e=a;
 	f=b;
 	cout<<"("<<e<<" + "<<f<<"i)"<<endl;
 }
 void iota::getdata2(int x,int y){
 	g=x;
 	h=y;
 	cout<<"("<<g<<" + "<<h<<"i)"<<endl;
 }
 
 void iota::sumdata(){
 	cout<<"--------"<<endl;
 	cout<<"("<<e+g<<" + "<<f+h<<"i)";
 }
 
 int main(){
 	class iota s1;
 	s1.getdata(2,3);
 	s1.getdata2(4,5);
 	s1.sumdata();
 }
