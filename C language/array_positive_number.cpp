#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100],size;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<size;i++){
		if(arr[i]>0){
			printf("%d is an positive number\n",arr[i]);
		}else if(arr[i]<0){
			printf("%d is an negative number\n",arr[i]);
		}
	}
}



// if(n>0)
//{
//	printf("POsitive");


//1,2,3,4,-6,-5,-7,-8
