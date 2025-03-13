#include<stdio.h>
#include<conio.h>
int main()
{
	char n;
	printf("Enter the alphabets= ");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U'){
		printf("Hurray you enter a Vowel alphabet");
	}else
	printf("You entered  a consonants");
	getch();
}
