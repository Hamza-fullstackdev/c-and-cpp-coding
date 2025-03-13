#include<stdio.h>

struct stu1{
	char first_name[20];
	char last_name[20];
	int age;
	int marks;
	char gender[20];
};


void stu1(char fname[],char lname[],int age,int marks,char gender[]){
	printf("Hii %s %s\nHope you are doing well\nWe have store your data in a function we want you to check out your data once again\nFirst name:\t%s\nLast name:\t%s\nAge:\t%d\nMarks:\t%d\nGender:\t%s",fname,lname,fname,lname,age,marks,gender);
}

int main(){
	struct stu1 hamza;
	printf("Enter your first name= ");
	gets(hamza.first_name);
	printf("Enter your last name= ");
	gets(hamza.last_name);
	printf("Enter your age= ");
	scanf("%d",&hamza.age);
	printf("Enter your marks= ");
	scanf("%d",&hamza.marks);
	printf("Enter your gender= ");
	scanf("%s",hamza.gender);
	stu1(hamza.first_name,hamza.last_name,hamza.age,hamza.marks,hamza.gender);
}
