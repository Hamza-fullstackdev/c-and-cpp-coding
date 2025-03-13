#include<stdio.h>
#include<ctype.h>
int main(){
	char b;
	printf("Please enter a alphabet=");
	scanf("%c",&b);
	
//Checking whether the input is space or not

	if(isspace(b)){
		printf("You enter a space");
	}
	else{
		printf("You enter a alphabet");
	}
}
