#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,r;
	printf("Enter the first volume of cylinder=");
	scanf("%d",&n);
	printf("Enter the second volume of cylinder=");
	scanf("%d",&m);
	printf("Enter the third volume of cuboid=");
	scanf("%d",&r);
	float volume=3.14*n*n*m;
	printf("The volume of cyllinder is=%f\n",volume);
	float surfacearea=(2*3.14*n*m)+(2*3.14*n*n);
	printf("The surface area of a cylinder is=%f",surfacearea);
}
