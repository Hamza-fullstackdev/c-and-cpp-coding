#include<stdio.h>
#include<conio.h>
int main()
{
	 float n,m;
	char y;
	printf("Enter the first number= ");
	scanf("%f",&n);
	printf("Enter the second number= ");
	scanf("%f",&m);
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
			printf("The number after division is %f",n/m);
			break;
				
		default:
				printf("Invalid operator");
	}
}
