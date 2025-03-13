#include<stdio.h>
#include<conio.h>

struct{
	char title[20]="Composition";
	char authur[20]="Hamza";
	char subject[20]="english";
	int id=123;
} book1,book2;

int main(){
	printf("%s\n",book1.title);
	printf("%s\n",book1.authur);
	printf("%s\n",book1.subject);
	printf("%d\n",book1.id);
}
