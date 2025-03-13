#include<stdio.h>
#include<conio.h>

int main(){
	int size,arr[100],a;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	printf("Enter the elements in an array: \n\n");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		for(int j=i;j<size;j++){
			if(arr[i]>arr[j]){
				a=arr[i];
				arr[i]=arr[j];
				arr[j]=a;
			}
		}
	}
	printf("The array in accending order is as following: \n\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
