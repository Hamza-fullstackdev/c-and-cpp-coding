#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	int sum=0;	
	printf("Enter the number to find whether it is prime or not= ");
	scanf("%d",&n);
	int *ptr1;
	*ptr1=n;
	for(int m=1;m<=*ptr1;m++){
		if(*ptr1%m==0){
		m++;
		}
	}
	if(sum==2){
		printf("prime number");
	}else{
		printf("Not a prime number");
	}
	
}
