#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100];
	int size;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	
	
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("The even numbers in an array are= \n");
			for(int i=0;i<size;i++){
				if(arr[i]%2==0){
					printf("%d\n",arr[i]);
				}
			}
}
