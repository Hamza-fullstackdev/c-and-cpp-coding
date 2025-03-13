#include<stdio.h>


struct {
	char *name;
	int age;
	char *passion;
} first,second;

int main(){
	first.name="Hamza";
	first.age=29;
	first.passion="programming";
	printf("%d\n%s\n%s",first.age,first.name,first.passion);
}
