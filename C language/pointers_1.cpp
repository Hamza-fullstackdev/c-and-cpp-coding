#include<stdio.h>
#include<conio.h>
int main(){
	int name[4][4]={{1,2,3,4},
					{4,5,6,4},
					{7,8,9,5},
					{10,11,12,13}};
	int n;
	int m;
	for( n=0;n<2;n++){
		for( m=0;m<4;m++){
			printf("%d\t\t",name[n][m]);
		}
		printf("\n");
	}
	
}
