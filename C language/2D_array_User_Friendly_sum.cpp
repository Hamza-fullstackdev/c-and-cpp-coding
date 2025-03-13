#include<stdio.h>
#include<conio.h>
int main(){
	int rows,column;
	int arr1[100][100],arr2[100][100];
	printf("Enter the Numbers of row= ");
	scanf("%d",&rows);
	printf("Enter the Numbers of column= ");
	scanf("%d",&column);
	
		printf("Enter the elements in first array\n\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
		printf("Enter the second elements\n\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			scanf("%d",&arr2[i][j]);
	}
	}
	printf("printing the sum\n\n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<column;j++){
			printf("%d\n",arr1[i][j]+arr2[i][j]);
		}
	}
}

	

