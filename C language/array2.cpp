#include<stdio.h>
#include<conio.h>
int main(){
	int a[10][10]={{1,2,3,4,5,6,7,8,9,0},{1,2,3,4,5,6,7,8,9,0}};
	for(int i=0;i<2;i++){
		for(int j=0;j<10;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
}
