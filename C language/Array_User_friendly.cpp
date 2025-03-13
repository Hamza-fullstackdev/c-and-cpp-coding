#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[5];
	int arr2[5];
	int arr3[5];
	int sum=0;	
	for(int i=0;i<5;i++){
		printf("Enter the first element array= ");
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<5;i++){
		printf("Enter the second element array= ");
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	printf("The sum of all elements are respectively:");
	for(int i=0;i<5;i++){
		printf("%d\n",arr3[i]);
	}
	for(int i=0;i<5;i++){
		sum+=arr3[i];
	}
	printf("The sum off all the elements are= %d",sum);
}
