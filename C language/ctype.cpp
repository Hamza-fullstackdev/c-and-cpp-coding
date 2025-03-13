#include<stdio.h>
#include<ctype.h>

int main(){
	char c;
	printf("Enter the character=\n");
	scanf("%c",&c);
	if(islower(c)){
		printf("Enter character is lower case");
	}
	else{
		printf("Enter number is upper case");
	}
}
