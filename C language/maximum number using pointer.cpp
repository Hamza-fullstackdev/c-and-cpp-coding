#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	printf("Enter first number=");
	scanf("%d",&n);
	printf("Enter second number=");
	scanf("%d",&m);
	int *ptr1,*ptr2;
	*ptr1=n;
	*ptr2=m;
	if(*ptr1>*ptr2){
		printf("The %d is a maximum number and its address is %d",*ptr1,ptr1);
	}else{
		printf("The maximun number is %d and address is %d",*ptr2,&m);
	}
}
