#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	int add, sub, multi,div;
	printf("Enter first number= ");
	scanf("%d",&n);
	printf("Enter second number= ");
	scanf("%d",&m);
	add=n+m;
	sub=n-m;
	multi=n*m;
	div=n/m;
	printf("The addition of these two number is %d\n",add);
	printf("The subtraction of these two number is %d\n",sub);
	printf("The multiplication of these two number is %d\n",multi);
	printf("The division of these two number is %d\n",div);
}
