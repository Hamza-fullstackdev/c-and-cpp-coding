#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[5];
	int arr2[5];
	int arr3[5];
	int sum=0;	
	//Getting First elements of array
	
	for(int i=0;i<5;i++){
		printf("Enter the first element array= ");
		scanf("%d",&arr1[i]);
	}
	//Getting second elements in an array
	
	for(int i=0;i<5;i++){
		printf("Enter the second element array= ");
		scanf("%d",&arr2[i]);
	}
	
	//Storring both array sum in an third array variable
	
	for(int i=0;i<5;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	
	//Displaying sum of Third variable array
	
	printf("The sum of all elements are respectively:\n\n");
	for(int i=0;i<5;i++){
		printf("%d\n",arr3[i]);
	}
	
	//Getting sum of all the elements of third variable
	
	printf("\n\n");
	for(int i=0;i<5;i++){
		sum+=arr3[i];
	}
	
	//Displaying the sum of all the elements on a screen
	
	printf("The sum off all the elements are= %d",sum);
}
