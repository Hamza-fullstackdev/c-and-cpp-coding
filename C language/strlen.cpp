#include<stdio.h>
#include<string.h>
int main(){
	char name[]="hamza";
	char second[]=" ilyas";
	printf("YOur name length is=%d\n",strlen(name));
	printf("Your first alphabet enter is %c\n",name[4]);
	printf("Your full name is %s\n",strcat(name,second));
	printf("Your full name is %s\n",strcpy(second,name));
	printf("%s\n",strrev(name));
	if(strlen(name)==4){
		printf("You can enter in zoo");
	}
	else{
		printf("You cannot");
	}
}
