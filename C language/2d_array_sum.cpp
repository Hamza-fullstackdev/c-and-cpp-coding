#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[3][3],arr2[3][3],arr3[3][3];
	int size;
	printf("\nEnter the elements of first array\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("\nEnter the elements of second array\n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&arr2[i][j]);
		}
	}
	printf("\nSum of an arrays is \n\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d \n",arr3[i][j]);
		}
		printf("\n\n");
	}
}
