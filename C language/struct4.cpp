#include<stdio.h>
#include<string.h>
struct{
	char name[20];
	int age;
	int marks;
	char passion[20];
}person1;

void person1(char name[],int age,int marks,char passion[]){
		printf("%s\n%d\n%d\n%s",name,age,marks,passion);
}

int main(){
	printf("Enter the name= ");
	gets(person1.name);
	printf("Enter your age=");
	gets(person1.age);
	printf("Enter your maarks= ");
	gets(person1.marks);
	printf("Enter your passion= ");
	gets(person1.passion);
	person1(person1.name,person1.age,person1.marks,person1.passion);
}
