#include<stdio.h>

int main() {

   int arr[10], i, s, j, p;

   printf("Enter size of an array:");
   scanf("%d", &s);

   printf("Enter array elements:");
   for (i = 0; i < s; i++) {
       scanf("%d", &arr[i]);
   }

   printf("All prime list is:");
   for (i = 0; i < s; i++) {
       j = 2;
       p = 1;
       while (j < arr[i]) {
           if (arr[i] % j == 0) {
               p = 0;
               break;
           } j++;
       }
       if (p == 1) {
           printf("%d ", arr[i]);
       }
   }

   return 0;
}
