#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100],size,change=0;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
			change=arr[i];
			arr[i]=arr[j];
			arr[j]=change;
			}
		}
	}
	printf("Ascending order\n");
	for(int i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
