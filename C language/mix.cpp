#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
int main(){
	int d;
	char mark[3];
	printf("enter the first character=\n");
	scanf("%c",&mark[3]);
	if(isdigit(mark[3])){
		printf("please enter a character");
	}else{
		printf("enter your second character=\n");
		scanf("%c",&d);
		if(isdigit(d)){
			printf("Please enter the character\n");
		}else{
			printf("Your enter valid character is %c and %c",mark[3],d);
		}
	}
}
