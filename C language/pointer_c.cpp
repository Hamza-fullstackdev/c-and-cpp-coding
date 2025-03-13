#include<stdio.h>
#include<conio.h>

void arithmatic(int n, int m){
	printf("The sum of two numbers enter by the user is %d\n",n+m);
	printf("The sum of two numbers enter by the user is %d\n",n-m);
	printf("The sum of two numbers enter by the user is %d\n",n/m);
	printf("The sum of two numbers enter by the user is %d\n",n*m);
}

int main(){
	arithmatic(20,10);
	arithmatic(30,20);
}

