#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch, Newch;
  	int i = 0;
 
  	printf("\n Please Enter any String :  ");
  	scanf("%s",&str);
  	
  	printf("\n Please Enter the Character that you want to Replace :  ");
  	scanf("%c", &ch);
  	
  	getchar();
  	
  	printf("\n Please Enter the New Character :  ");
  	scanf("%c", &Newch);
  	
  	while(i <= strlen(str))
  	{
  		if(str[i] == ch)  
		{
  			str[i] = Newch;
  			break;
 		}
 		i++;
	}
	printf("\n The Final String after Replacing First occurrence of '%c' with '%c' = %s ", ch, Newch, str);
	
  	return 0;
}
