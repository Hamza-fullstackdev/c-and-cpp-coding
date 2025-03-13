#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Enter your age= ");
	scanf("%d",&age);
	if(age>18){
		if(age<30){
			printf("You are eligible to drive");
		}else if(age>31&&age<40){
			printf("Sorry you are to much old to drive");
		}else{
			printf("Sorry i have no words to write here:(");
		}
	}
}
