#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("Please enter an aplphabet=");
	scanf("%c",&c);
	
//checking wheter the input is number or not	

	if(isdigit(c)){
		printf("You enter a digit please enter a alphabet");
	}else{
		printf("You enter a alphabet");
	}
}
