#include<stdio.h>
#include<conio.h>
int main(){
	int muneeb[100],hamza[100],sum[100],size,Finalsum=0;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&muneeb[i]);
	}
	printf("Enter the value of hamza array= \n");
	
	for(int i=0;i<size;i++){
		scanf("%d",&hamza[i]);
	}
	for(int i=0;i<size;i++){
		sum[i]=muneeb[i]+hamza[i];
	}
	
	printf("The simple sum  are = \n");
	for(int i=0;i<size;i++){
		printf("%d\n",sum[i]);
	}
	for(int i=0;i<size;i++){
	Finalsum+=sum[i];
	}
	printf("The final sum is %d",Finalsum);
}
