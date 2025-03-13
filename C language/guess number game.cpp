#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	n=16;
	printf("Entered the guess number(between 1 to 20) so we can find out that your entered number is a guessed number or not= ");
	scanf("%d",&n);
	if(n>20||n<0)
	printf("Your entered number %d is an invalid number to play this game please enter a number between 1 to 20");
	else if(n==16)
	printf("Hurray you guessed it");
	else if(n>10){
	printf("Your entered number is %d if you entered a lower number so you may found it\n",n);
	printf("Better luck for next time :)");	
	}
	else{
	printf("Your entered number is %d if you entered a higher number so you may found it\n",n);
	printf("Better luck for next time :)");		
	}

}
