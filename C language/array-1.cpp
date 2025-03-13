#include<stdio.h>
#include<conio.h>
int main(){
	int a[5]={1,2,3,4,5};
	printf("Enter the element=");
	for(int i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("The enter element is= %d\n",a[i]);
	}
	printf("\n\n\n");
	printf("_______________________Now The Aray in reverse is _________________________\n\n\n");
	for(int i=4;i>=0;i--){
		printf("The array in reverse is %d\n",a[i]);
	}
}
