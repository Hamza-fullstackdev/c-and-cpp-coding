#include<stdio.h>
#include<ctype.h>

	int main(){
	char a;
	printf("Enter the character=\n");
	scanf("%c",&a);
		if(isupper(a)){
		printf("Enter character is upper case");
	}
	else{
		printf("Enter number is lower case");
	}
}
