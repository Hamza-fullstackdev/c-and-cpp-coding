#include<iostream>
using namespace std;
// Destructor
// Destructor has same syntax as constructor, but the difference is 
// that we use ~ symbol before its name (located just below Esc key),
//However its calling from main Function is same as that of constructor.
class hello{
	public:
		~hello(){
			cout<<"I am a destructor";
		}
};
int main(){
	hello obj;
}

// Destructor just have default destructor not
// perameterized as constructor. it is just use to destroy
// constructor and to show cout message.

					// Bus yehi hai or kuch ni hai :(
