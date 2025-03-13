#include<stdio.h>
#include<conio.h>

void arraySize(int);
void addArray(int ,int);

int main(){
	int size,arr1[100],arr2[100];
	arraySize(size);
	addArray(arr1,arr2);
}

arraysize(int size){
	printf("Enter the length of an array= ");
	scanf("%d",&size);
}

addArray(int arr1[],int arr2[]){
	int arr3[100];
	printf("Enter the elements of an array\n");
	for(int i=0;i<size;i++){
		printf("Enter the %d element of an array= ",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size;i++){
		printf("Enter the %d element of an array= ",i);
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	for(int i=0;i<size;i++){
		printf("%d",arr3[i]);
	}
}
