#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	printf("Enter the volume=");
	scanf("%d",&n);
	int area=n*n*n;
	printf("The volume of cube is %d\n",area);
	int surfacearea=6*n*n;
	printf("And the surface area is %d",surfacearea);
}
