#include<stdio.h>
#include<conio.h>


struct emp{
	char name[10];
	int age;
	int marks;
	char passion[10];
};

void employe(char name[],int age, int marks,char passion[]){
	printf("Hey %s \nHope you are doing well we are glad to tell you that we have store your enter information\nHere it is:\n\tName;\t%s\n\tAge:\t%d\n\tMarks:\t\n\tPassion:\ts",name,age,marks,passion);
}
int main(){
	struct emp employee;
	printf("Enter your name= ");
	gets(employee.name);
	printf("Enter your age= ");
	scanf("%d",&employee.age);
	printf("Enter your marks= ");
	scanf("%d",&employee.marks);
	printf("Enter your passion= ");
	scanf("%s",employee.passion);
	employe(employee.name,employee.age,employee.marks,employee.passion);
}
