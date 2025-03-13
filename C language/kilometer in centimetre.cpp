#include<stdio.h>
#include<conio.h>
int main()
{
	int kilo;
	int centi;
	printf("Enter value in kilometer=");
	scanf("%d",&kilo);
	centi=kilo*100000;
	printf("The value in centimeter=%d meter",centi);
}
