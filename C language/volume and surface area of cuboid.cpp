#include<stdio.h>
#include<conio.h>
int main()
{
	int i,b,c;
	printf("Enter the first volume of cuboid=");
	scanf("%d",&i);
	printf("Enter the second volume of cuboid=");
	scanf("%d",&b);
	printf("Enter the third volume of cuboid=");
	scanf("%d",&c);
	int volume=i*b*c;
	printf("The volume of a cuboid is=%d\n",volume);
	int surfacearea=(2*i*b)+(2*b*c)+(2*c*i);
	printf("The surface area of a cuboid is=%d",surfacearea);
	
}
