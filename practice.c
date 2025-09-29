#include <stdio.h>

int main(){
   int arr1[3];
   int arr2[3];
   int dotProduct = 0; 

   printf("Enter 3 nums for vector 1");
   scanf("%d  %d  %d", &arr1[0], &arr1[1], &arr1[2]);
    printf("3 more for the second vector");

   scanf("%d  %d  %d", &arr2[0], &arr2[1], &arr2[2]);

   for(int i =0; i < 3; i ++){
    dotProduct += arr1[i]*arr2[i];
    //printf("%d",dotProduct);
   }
   printf("%d\n", dotProduct);
}