#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	int *ptr;
	*ptr=n;
	printf("The value of a number is %d",*ptr);
}
