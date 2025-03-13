#include<stdio.h>
#include<conio.h>
int main(){
	int size;
	int arr[100];
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("Enter the element in an array= ");
		scanf("%d",&arr[i]);
	}	
	for(int i=size;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	getche();
}
