#include<stdio.h>
#include<conio.h>

void array(int arr[]){
	printf("Please enter elements in an array :)\n");
	for(int i=0;i<6;i++){
		scanf("%d",&arr[i]);
	}printf("\n\n\n");
	printf("_________Before reversing__________\n");
	printf("\n\n\n");
	for(int i=0;i<6;i++){
		printf("The enter values is %d\n",arr[i]);
	}printf("\n\n\n");
	printf("_________Array after reversing is___________\n");
	printf("\n\n\n");
	for(int i=5;i>0;i--){
		printf("The entered elements are %d\n",arr[i]);
	}
}


int main(){
	int a[6]={1,2,3,4,5,6};
 	array(a);

}
