#include<stdio.h>
int main(){
	int n;
	printf("Enter the character= ");
	scanf("%c",&n);
	if(isalpha(n)){
		printf("You enter a %c alphabet",n);
	}else{
		printf("You enter a %c number",n);
	}
}
