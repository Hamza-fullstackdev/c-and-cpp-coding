#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter your age= ");
	scanf("%d",&age);
	if(age<18||age==18)
	printf("Your age is 18 so you cannot vote");
	else
	printf("you can vote");
}
