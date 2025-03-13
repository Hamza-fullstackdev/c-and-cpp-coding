#include<stdio.h>



struct {
	char *name;
	int age;
	char *passion;
	
}hamza;

int main(){
	printf("Enter your name= ");
	scanf("%s",&hamza.name);
	printf("Enter your passion= ");
	scanf("%s",&hamza.passion);
	printf("Enter your age= ");
	scanf("%d",&hamza.age);
	printf("%s\n%s\n%d",hamza.name,hamza.passion,hamza.age);
}
