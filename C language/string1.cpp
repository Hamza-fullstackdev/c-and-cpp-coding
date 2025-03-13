#include<stdio.h>
#include<conio.h>


struct {
	char name[5];
	int age;
	char passion[5];
}abc,def;

int main(){
	printf("Enter your name= ");
	scanf("%s",abc.name);
	printf("Enter your age= ");
	scanf("%d",&abc.age);
	printf("Enter your passion= ");
	scanf("%s",abc.passion);
	printf("Hey %s hope you are doing well!\nWe are glad to tell you that we have store your information,we want you to check this:\nYour name=%s\nYour age is: %d\nYour passion is to: %s",abc.name,abc.name,abc.age,abc.passion);
}

