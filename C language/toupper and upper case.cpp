#include<stdio.h>
#include<ctype.h>

int main(){
	char a;
	printf("Enter the character=\n");
	scanf("%c",&a);
	if(islower(a)){
		printf("In uppercase %c",toupper(a));
	}
	else{
		printf("In lower case %c",tolower(a));
	}
}
