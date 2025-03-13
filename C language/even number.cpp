#include<stdio.h>
#include<conio.h>

int main(){
	int n,m,sum;
	printf("Enter the number to find all even numbers in range= ");
	scanf("%d",&n);	
	m=0;
	sum=0;
	do{
		m+=2;	
		sum+=m;	
	}while(m<n);
	printf("The sum of the even number is %d",sum);
}
