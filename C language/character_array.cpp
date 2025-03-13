#include<stdio.h>
#include<string.h>

struct{
	char name[20];
}car1;

int main(){
	strcpy(car1.name,"Hamza");
		char nam[20]=strcat(car1.name,"hamza");
	printf("%s",nam);
}
