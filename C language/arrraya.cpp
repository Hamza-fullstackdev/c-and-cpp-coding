#include<stdio.h>
#include<conio.h>
int main(){
	int hamza[100];
	int size;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	
	
	for(int i=0;i<size;i++){
		scanf("%d",&hamza[i]);
	}

	printf("Reversing an array= \n");
	for(int i=size;i>=0;i--){
		printf("%d\n",hamza[i]);
	}
}
