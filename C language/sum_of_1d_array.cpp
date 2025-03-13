#include<stdio.h>
int main(){
	int size;
	int arr[10];
	int sum=0;
	printf("Enter the size of an array=");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("Enter the elements in an array= ");
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		sum+=arr[i];
	}
	printf("The sum of an array elements are %d",sum);
}
