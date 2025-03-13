#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int sum=0;
	printf("Enter your number to find its factorial=");
	scanf("%d",&n);
	int *ptr1;
	*ptr1=n;
	int m=1;
	int *ptr2;
	*ptr2=m;
	for(*ptr2=1;*ptr2<=*ptr1;*ptr2++){
		sum=sum+m;
	}
}
