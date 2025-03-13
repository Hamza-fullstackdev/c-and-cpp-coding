#include"stdio.h"
#include"conio.h"
int main(){
	int arr1[100],arr2[100],arr3[100];
	int size;\
	int sum;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	printf("Enter the elements in an array");
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size;i++){
		scanf("%d",&arr2[i]);
	}
	for(int i=0;i<size;i++){
		arr3[i]=arr1[i]+arr2[i];
	}
	printf("printing sum");
	for(int i=0;i<size;i++){
		printf("%d\n",arr3[i]);
	}
	for(int i=0;i<size;i++){
		sum+=arr3[i];
	}
	printf("The sum is %d",sum);
}
