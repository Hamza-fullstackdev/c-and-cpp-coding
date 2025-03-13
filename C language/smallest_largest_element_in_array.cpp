#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[100],size;
	int largest,smallest;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	largest=arr1[0];
	smallest=arr1[0];
	
	for(int i=0;i<size;i++){
		if(largest<arr1[i]){
			largest=arr1[i];
		}else //if(arr1[i]<smallest){
			smallest=arr1[i];
//		}
	}
	printf("\n\nThe largest number is %d\n",largest);
	printf("\nThe smallest number is %d",smallest);
}
