#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[100],arr2[100],size,sum=0;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	
	printf("Enter the first array element\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
//	
		printf("Enter the second array element\n");
	for(int i=0;i<size;i++){ //
		scanf("%d",&arr2[i]);
	}
	
		for(int i=0;i<size;i++){
	printf("%d",arr1[i-arr2[i]);
	}	
}
