#include <stdio.h>
#include <stdlib.h>
#include "prac.h"
int calcDP(int *arrayOne, int *arrayTwo, int length){
    int dotProduct = 0;
    for (int i = 0; i < length; i++){
        dotProduct += arrayOne[i] * arrayTwo[i];
    }

   return dotProduct;
}

void getData(int n, int *vector){
    printf("Fill out this array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &vector[i]);
    }
}
