#include<stdio.h>
#include<conio.h>
int main(){
	
	int n,m,o,p,q;
	printf("Enter the first number=\n");
	scanf("%d",&n);
	printf("Enter the second number=\n");
	scanf("%d",&m);
	printf("Enter the third number=\n");
	scanf("%d",&o);
	printf("Enter the fourth number=\n");
	scanf("%d",&p);
	printf("Enter the fifth number=\n");
	scanf("%d",&q);
	if(n>m&&n>p&&n>o&&n>p&&n>q){
		printf("The %d is greater number",n);
	}
	else if(m>n&&m>o&&m>p&&m>q){
		printf("The %d is greater number",m);
		
	}
	else if(o>m&&o>n&&o>p&&o>q){
		printf("The %d is greater number",o);
	}
	else if(p>m&&p>n&&p>o&&p>q){
		printf("The %d is greater number",p);
	}
	else{
		printf("The %d is greater number",q);
	}
}
