#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[100],Even_arr[100],Odd_arr[100];
	int size;
	int count=0;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		printf("Enter the %d elements of an array= ",i);
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size;i++){
		if(arr1[i]%2==0){
			count++;
			Even_arr[i]=arr1[i];
			printf("%d\n",Even_arr[i]);
		}
	}
		printf("%d",count);
	for(int i=0;i<size;i++){
		if(arr1[i]%2!=0){
			count++;
		Odd_arr[i]=arr1[i];
			printf("%d\n",Odd_arr[i]);
		}
	}printf("%d",count);
}
