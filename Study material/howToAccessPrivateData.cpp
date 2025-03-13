#include<iostream>
using namespace std;

// Q: How to access private function?
// Ans: By calling private fuunction in public function.
class howToAccessPrivateData{
	private:
		// Creating a private function
		void disp(){
			int n=23;
			int m=12;
			cout<<n<<endl<<m;
		}
	public:
		//Creating a method to show private  function
		void anotherDisp(){
			disp();// Calling private function there.
		}
};
int main(){
	howToAccessPrivateData obj;
//	obj.disp();//This will thrrow an error because we cannot
	//access private data and fuctions.
	
	obj.anotherDisp();// Thats work :)
}
