#include<stdio.h>
#include"conio.h"



void get_size(int arr[],int size){
	for(int i=0;i<size;i++){
		printf("Enter the %d element of an array= ",i);
		scanf("%d",&arr[i]);
	}
}

void Even_func(int Initial_Even_array[],int size){
	//Here i am initializing a new array
	int Final_Even_array[100];
	int count=0;
	printf("Even numbers in an array\n\n");
	for(int i=0;i<size;i++){
		if(Initial_Even_array[i]%2==0){
			count++;
			//Here i am copying initial array into a new array
			Final_Even_array[i]=Initial_Even_array[i];
			printf("%d\n",Final_Even_array[i]);
		}
	}
	printf("\n\n");
		printf("The number of Even numbers in an array is %d\n",count);
}
void Odd_func(int Initial_Odd_array[],int size){
	//Here i am initializing a new array
	int Final_Odd_array[100];
	int count;
	printf("Odd numbers in an array\n\n");
	for(int i=0;i<size;i++){
		if(Initial_Odd_array[i]%2!=0){
			count++;
				//Here i am copying initial array into a new array
				Final_Odd_array[i]=Initial_Odd_array[i];
			printf("%d\n",Final_Odd_array[i]);
		}
	}
	printf("\n\n");
		printf("The number of Odd numbers in an array is %d\n",count);
}

void P_num(int P_arr[],int size){
	int j=2,p=1;
	int count=0;
printf("Prime numbers in an array\n\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 2; j < P_arr[i]; j++)
        {
            if (P_arr[i] % j == 0)
            {
                break;
            }
            else if (j == P_arr[i] - 1)
            {
            	count++;
                printf("%d\n", P_arr[i]);
            }
        }
    }
    printf("\n\n");
    printf("The total number of prime number is %d",count);
}

int main(){
	int size;
	int arr[100];
	printf("Enter the size of array= ");
	scanf("%d",&size);
	get_size(arr,size);
	printf("\n\n\n");
	Even_func(arr,size);
	printf("\n\n\n");
	Odd_func(arr,size);
	printf("\n\n\n");
	P_num(arr,size);
}
