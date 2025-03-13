#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,f;
	f=1;
	printf("Enter the number to find factorial= ");
	scanf("%d",&n);
	for(m=1;m<=n;m++){
		f=f*m;
	}
	printf("%d",f);
}

