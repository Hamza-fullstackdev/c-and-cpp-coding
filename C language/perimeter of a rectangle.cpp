#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m;
	printf("Enter the length of rectangle=");
	scanf("%d",&n);
	printf("Enter the width of rectangle=");
	scanf("%d",&m);
	int area;
	area=2*(n+m);
	printf("The perimeter of a rectangle is=%d",area);
}
