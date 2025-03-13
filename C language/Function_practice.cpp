#include<stdio.h>
#include<conio.h>

struct car{
	char name[10];
	int age;
	char passion[10];
}car;
void profile(char name[],int age,char passion[]){
	printf("%s\n%d\n%s",name,age,passion);
}
int main(){
	
	printf("Enter your name=");
	scanf("%s",car.name);
	printf("Enter your age");
	scanf("%d",&car.age);
	printf("Enter your passion= ");
	gets(car.passion);
	profile(car.name,car.age,car.passion);
}

