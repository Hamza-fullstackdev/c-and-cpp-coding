#include<stdio.h>
#include<conio.h>
int main()
{
	char n[30];
	char m[30];
	int y;
	int z;
	printf("Enter your name= ");
	scanf("%s",&n);
	printf("Enter your father name= ");
	scanf("%s",&m);
	printf("Enter your cnic= ");
	scanf("%d",&z);
	printf("Enter your Mobile number= ");
	scanf("%d",&y);
	printf("Your entered data is= %s\n%s",n,m);
	printf("%d",y);
	printf("%d",z);
}
