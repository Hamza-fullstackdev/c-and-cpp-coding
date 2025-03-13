#include<stdio.h>
#include<conio.h>
int main(){
	int rows,column;
	
	//This is an maximum array size i have specify here
	//Asal value row or column ki hum user se hi lein gay or ye mein ne yahan maximum lenth specify ki hui hai
	
	int arr[100][100];
	printf("Enter the number of rows of an array= ");
	scanf("%d",&rows);
	printf("Enter the number of column of an array= ");
	scanf("%d",&column);
	
	printf("Now you can enter %d elements in an array\n",rows*column);
	//Getting value from user of input 2d arrays
	
	
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			printf("Enter the element in an array= ");
			scanf("%d",&arr[i][j]);
		}
	}
	
	//Now displaying array here
	
		for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			printf("Your inputs is %d\t",arr[i][j]);
			
		}
		printf("\n");
	}
}
