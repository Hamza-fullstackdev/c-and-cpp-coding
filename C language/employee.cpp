#include<stdio.h>
#include<conio.h>


struct emp{
	char Name[20];
	int marks;
	char gender[20];
	
};

void employee_data(char name[],int marks,char gender[]){
	printf("%s\n%d\n%s",name,marks,gender);
}

int main(){
	struct emp employee;
	gets(employee.Name);
	scanf("%d",&employee.marks);
	scanf("%s",employee.gender);
	employee_data(employee.Name,employee.marks,employee.gender);
}
