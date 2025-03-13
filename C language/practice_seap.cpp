#include<stdio.h> 
int minSwap(int *arr1, int n, int k) 
{ 
    int ctr = 0; 
    for (int i = 0; i < n; ++i) 
        if (arr1[i] <= k) 
            ++ctr; 
    int gelem = 0; 
    for (int i = 0; i < ctr; ++i) 
        if (arr1[i] > k) 
            ++gelem; 
    int noswp = gelem; 
    for (int i = 0, j = ctr; j < n; ++i, ++j) 
	{ 
        if (arr1[i] > k)
        {
            --gelem; 
        }
        if (arr1[j] > k)
        {
            ++gelem; 
        }
    }
        if(noswp>gelem)
        {
            noswp=gelem;
        }
        if(noswp<gelem)
        {
            noswp=noswp;
        }            
    return noswp; 
} 
int main() 
{ 
    int arr1[] = {2, 7, 9, 5, 8, 7, 4};
    int n = sizeof(arr1) / sizeof(arr1[0]); 
    int k = 7; 
	int i = 0; 
   //------------- print original array ------------------	
	printf("The given array is:  \n");
	for(i = 0; i < n; i++)
		{
			printf("%d  ", arr1[i]);
		}
	printf("\n");
//-----------------------------------------------------------      
    printf("The minimum swap required is: %d",minSwap(arr1, n, k)); 
    return 0; 
}
