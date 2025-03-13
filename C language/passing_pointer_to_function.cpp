#include<stdio.h>
#include<conio.h>

void func(int *ptr1,int *ptr2){
	printf("The sum is %d",*ptr1+*ptr2);
}


int main(){
	int n,m;
	printf("Enter the first number= ");
	scanf("%d",&n);
	printf("Enter the second number= ");
	scanf("%d",&m);
	func(&n,&m);
}
