#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a;
	int size,element;
	cout<<"Enter the size of an array= ";
	cin>>size;
	cout<<"Enter the elements in an array"<<endl;
	for(int i=0;i<size;i++){
		cin>>element;
		a.push_back(element);
	}
	a.pop_back();
	a.pop_back();
	a.pop_back();
	cout<<"\n\nDisplaying the elements in an array";
	for(int i=0;i<a.size();i++){
		cout<<"\n"<<a[i];
	}

}
