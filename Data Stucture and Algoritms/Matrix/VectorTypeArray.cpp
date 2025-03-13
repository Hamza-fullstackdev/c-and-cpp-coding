#include<iostream>
using namespace std;
const int Max_Size=3;

class Vector{
	private:
		int *arr;
		int size,used;
	public:
		Vector(){
			size=Max_Size;
			used=0;
			arr= new int [Max_Size];
		}	
		void insert(const int num){
			if(used>size-1){
				cout<<"Storage is full";
			}
			else{
				arr[used]=num;
				used++;
			}
		}
		void search(const int num){
			for(int i=0;i<used;i++){
				if(arr[i]==num){
					cout<<num<<" is found at "<<i<<endl;
				}
			}
		}
		void delet(const int num){
			for(int i=0;i<used;i++){
				if(arr[i]==num){
					arr[i]=0;
//					used--;
				}
			}
		}
		void print(){
			for(int i=0; i<used;i++){
				cout<<arr[i]<<endl;
			}
		}
};

int main(){
	Vector s;
	s.insert(2);
	s.insert(3);
	s.insert(4);
	
	s.print();
	s.search(2);
	s.search(6);
	
	s.delet(3);
	s.print();
	
}
