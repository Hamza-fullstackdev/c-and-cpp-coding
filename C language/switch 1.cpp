#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	char y;
	printf("Enter the first number= ");
	scanf("%d",&n);
	printf("Enter the second number= ");
	scanf("%d",&m);
	printf("Choose the operator= ");
		scanf("%c",&y);
	switch(y){
		case '+':
			printf("The number after addition is %d",n+m);
			break;
		case '-':
			printf("The number after subtraction is %d",n-m);
			break;
		case '*':
			printf("The number after multiplication is %d",n*m);
			break;
		case '/':
			printf("The number after division is %d",n/m);
			break;
				
		default:
				printf("Invalid operator");
	}
}
