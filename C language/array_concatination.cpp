#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[5]={1,2,7,4,5};
	int arr2[5]={1,2,3,8,5};
	int arr3[15];
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i];
	}
	for(int i=0;i<5;i++){
		arr3[i]=arr2[i];
	}
	for(int i=0;i<5;i++){
		printf("%d",arr3[i]);
	}
}
