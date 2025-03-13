#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("Enter first number=");
	scanf("%d",&a);
	printf("Enter second number=");
	scanf("%d",&b);
	int *ptr1,*ptr2;
	*ptr1=a;
	*ptr2=b;
	int c;
	c=*ptr1+*ptr2;
	int *ptr3;
	*ptr3=c;
	printf("The sum of two numbers using pointers is %d which adress is %d",c,ptr3);
}
