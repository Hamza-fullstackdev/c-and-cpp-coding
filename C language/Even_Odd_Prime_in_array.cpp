#include <stdio.h>
#include "conio.h"

void get_size(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element of an array= ", i);
        scanf("%d", &arr[i]);
    }
}

void Even_func(int E_array[], int size)
{
    printf("Even numbers in an array\n\n");
    for (int i = 0; i < size; i++)
    {
        if (E_array[i] % 2 == 0)
        {
            printf("%d\n", E_array[i]);
        }
    }
}

void Odd_func(int O_array[], int size)
{
    printf("Odd numbers in an array\n\n");
    for (int i = 0; i < size; i++)
    {
        if (O_array[i] % 2 != 0)
        {
            printf("%d\n", O_array[i]);
        }
    }
}

void P_num(int P_arr[], int size)
{
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
                printf("%d\n", P_arr[i]);
            }
        }
    }
}

int main()
{
    int size, Osize, Esize;
    int arr[100];
    printf("Enter the size of array= ");
    scanf("%d", &size);
    get_size(arr, size);
    printf("\n\n\n");
    Even_func(arr, size);
    printf("\n\n\n");
    Odd_func(arr, size);
    printf("\n\n\n");
    P_num(arr, size);
}
