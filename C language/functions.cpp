#include<stdio.h>
#include<conio.h>


void add(){
	int n,m;
	printf("Enter the first number= ");
	scanf("%d",&n);
		printf("Enter the second number= ");
	scanf("%d",&m);
	printf("The sum of two numbers is %d\n",n+m);
}

void sub(int a, int b){
	printf("The subtraction of two numbers is=%d\n",a-b);
}

void swap(){
	int n,m;
	printf("Enter the first number=");
	scanf("%d",&n);
	printf("Enter the second number=");
	scanf("%d",&m);
	printf("The first number after swapping is= %d\n",m);
	printf("The second number after swapping is= %d\n",n);
}

int div(int a, int b){
	return a/b;
}

int main(){
	int v;
	add();
	sub(30,40);
	swap();
	v=div(30,5);
	printf("The number after division is %d",v);
}
