#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,z;
	printf("Enter first number= ");
	scanf("%d",&n);
	printf("Enter second number= ");
	scanf("%d",&m);
	printf("Enter third number= ");
	scanf("%d",&z);
	if(n>m&&n>z)
	printf("The first number is greater");
	else if(m>n&&m>z)
	printf("The second number is greater");
	else
	printf("The third number is greater");
}
