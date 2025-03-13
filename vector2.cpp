#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &vec){
		for(int i=0;i<vec.size();i++){
		cout<<" "<<endl<<vec[i];
		}
	}
	
int main(){
	vector<int> a;
	int size,element;
	cout<<"Enter the size of an integers= ";
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>element;
		a.push_back(element);
	}
	
	vector<int>::iterator iter=a.begin();
	a.insert((((((((((((iter+2)-1)+2)-3)+1)+2)-1)+2)+1)-4)+2),3);
	display(a);
}
