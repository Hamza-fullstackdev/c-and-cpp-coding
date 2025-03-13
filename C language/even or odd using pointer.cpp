#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the number to find whether your input number is even or odd =");
	scanf("%d",&n);
	int *ptr1;
	*ptr1=n;
	if(*ptr1>0){
		printf("You enter a Even number %d which address is %d",*ptr1,&n);
	}
	else{
		printf("You enter a Odd number %d which address is %d",*ptr1,&n);
	}
}
