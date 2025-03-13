#include<stdio.h>
#include<string.h>
#include<conio.h>

struct{
	char title[20];
	char authur[20];
	char subject[20];
	int id;
} book1,book2;

int main(){
	//for book1
	strcpy(book1.title,"composition");
	strcpy(book1.authur,"Hamza");
	strcpy(book1.subject,"English");
	book1.id=123;
	//For book2
	strcpy(book2.title,"Comprehension");
	strcpy(book2.authur,"Saad");
	strcpy(book2.subject,"English and composition");
	book2.id=456;
	//printing data
	printf("Printing data of first book\n\n\n");
	printf("%s\n",book1.title);
	printf("%s\n",book1.authur);
	printf("%s\n",book1.subject);
	printf("%d\n",book1.id);
	printf("\n\n\nPrinting data of first book\n\n\n");
	printf("%s\n",book2.title);
	printf("%s\n",book2.authur);
	printf("%s\n",book2.subject);
	printf("%d",book2.id);
}
