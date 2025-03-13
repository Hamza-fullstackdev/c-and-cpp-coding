#include<stdio.h>
#include<conio.h>
int main()
{
	float celsius,faren;
	printf("Enter degree in celsius=");
	scanf("%f",&celsius);
	faren=(celsius*9/5)+32;
	printf("The temprature in farenheit is=%f",faren);
}
