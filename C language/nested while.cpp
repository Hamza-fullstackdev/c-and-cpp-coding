#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Please enter your marks= ");
	scanf("%d",&n);
	while(n>40){
		while(n<70){
			printf("%d\n",n);
			n++;
		}
	}printf("Out of range");
}
