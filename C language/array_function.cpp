#include<stdio.h>



int main(){
	
	int arr[3][3]={{1,2,3},{5,6,7},{8,9,0}};
	int arr1[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int arr3[3][3];
	

	
	for(int k=0;k<3;k++){
		for(int j=0;j<3;j++){
			printf("%d\n",arr[k][j]+arr1[k][j]);
		}
	}
}
	
