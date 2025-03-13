#include<stdio.h>
#include<conio.h>
int main(){
	int arr[4];
	int arr2[4];
	printf("Please enter the elements in an array :)\n");
	printf("\n\n\n");
	for(int i=0;i<=4;i++){
		scanf("%d\n",&arr[i]);
	}printf("____________Before reversing___________");
		printf("\n\n\n");
	for(int i=0;i<=4;i++){
		printf("Enter elements are %d\n",arr[i]);
	}printf("____________after reversing___________");
		printf("\n\n\n");
	for(int i=0;i<=4;i++){
		arr2[i]=arr[i];
	}
	for(int i=0;i<=4;i++){
		printf("%d\n",arr2[i]);
	}
}
