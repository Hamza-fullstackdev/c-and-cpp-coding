#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter your ratings= ");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Your rating is 1");
			break;
		case 2:
			printf("Your rating is 2");
			break;
		case 3:
			printf("Your rating is 3");
			break;
		case 4:
			printf("Your rating is 4");
			break;
		case 5:
			printf("Your rating is 5");
			break;
		default:
			printf("Invalid ratings");
			
	}
}
