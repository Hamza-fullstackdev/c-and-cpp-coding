#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	n=0;
	while(n<20){
		printf("%d\n",n);
		n=n+2;
		if(n==10){
			break;
		}
	}
}
