#include<stdio.h>
#include<conio.h>
int main(){
	int arr1[100],fre[100];
	int size,count;
	printf("Enter the size of an array= ");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		scanf("%d",&arr1[i]);
		fre[i]=-1;
	}
	for(int i=0;i<size;i++){
		count=1;
		for(int j=i+1;j<size;j++){
			if(arr1[i]==arr1[j]){
			count++;
			fre[j]=0;
			}
		}
		 if(fre[i]!=0)
        {
            fre[i] = count;
        }
	}
	for(int i=0;i<size;i++){
		if(fre[i]!=0){
			 printf("%d occurs %d times\n", arr1[i], fre[i]);
		}
	}
}
