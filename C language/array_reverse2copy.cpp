#include<stdio.h>
#include<conio.h>
int main(){
	int size;
	int arr[10];
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("Enter the element in an array= ");
		scanf("%d",&arr[i]);
	}
	printf("The array in reverse order is following");
	for(int i=size;i>=0;i--){
		printf("%d\n",arr[i+1]);
	}
	
}
