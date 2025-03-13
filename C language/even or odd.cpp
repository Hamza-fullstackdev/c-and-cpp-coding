#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	printf("Enter the number to find whether it is prime or not=");
	scanf("%d",&n);
	while(n%2!=0){
		printf("YOu enter a prime number",n);
		n++;
	}
}
