#include<stdio.h>
#include<conio.h>
int main(){
	//Array maximum length
	//Asal array ki length hum user se hi lain ge ye maximum array ki lenth hai k ap itnay elements store krwa sktay hain
	
	int arr1[100];
	int arr2[100];
	int arr3[100];
	int size;
	int sum=0;
	
	//	Getting The size of an array
	
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	
	//Getting First elements of array
	
	for(int i=0;i<size;i++){
		printf("Enter the First elements of in an array= ");
		scanf("%d",&arr1[i]);
	}
	printf("\n\n\n");
	printf("Now store second variable elements :)\n");
	
	//Getting Second elements of array
	
	for(int i=0;i<size;i++){
		printf("Enter the Second elements of in an array= ");
		scanf("%d",&arr2[i]);
	}
	
	//Storring both array sum in an third array variable
	
	for(int i=0;i<size;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	
	//Displaying sum of all the elements of third variable
	
	printf("\n\n\n");
	printf("The sum of an array is\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr3[i]);
	}
	
	//Getting sum of all the elements of third variable
	
	printf("\n\n");
	
	for(int i=0;i<size;i++){
	sum+=arr3[i];
	}
	
	//Displaying the sum of all the elements on a screen
	
	printf("The sum of the stored variable is %d",sum);
	
}
