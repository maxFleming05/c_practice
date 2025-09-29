#include <stdio.h>
#include <stdlib.h>
#include "prac.h"

int main(){
   int *arr1, *arr2;
   int len, result;

   printf("How long do you want the vectors to be? ");
   scanf("%d", &len);

   arr1 = (int *) malloc(len*sizeof(int));
   arr2 = (int *) malloc(len*sizeof(int));

   getData (len, arr1);
   getData(len, arr2);
    result = calcDP(arr1, arr2, len);
    printf("Your dot product is %d \n", result);
    free(arr1);
    free(arr2);

    return 0;
}
