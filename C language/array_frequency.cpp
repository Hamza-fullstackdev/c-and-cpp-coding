#include<stdio.h>
#include<conio.h>
int main()
{
	int arr1[100],size;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0;i<size;i++){
		int j=1;
		int p=2;
		while(p<arr1[i]){
			if(arr1[i]%p==0){
				j=0;
				break;
			}
			p++;
		}
		if(j==1){
			printf("%d",arr1[i]);
		}
		
	}
}
