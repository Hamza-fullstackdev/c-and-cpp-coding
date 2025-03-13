#include<stdio.h>
#include<ctype.h>
int main()
{
	char a;
	printf("Enter the character=");
	scanf("%c",&a);
	
//checking whether enter input is alphabet or not
		
		if(isalpha(a)){
		printf("You enter a alphabet");
	}
	else{
		printf("You has not enter a alphabet");
	}
}
