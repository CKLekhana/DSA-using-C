#include <stdio.h>
#include <stdlib.h>
#include "vector.h"

int main(){


    int size = 5, type = 3;

    // snippet for testing char vectors
    char *charVector = (char *)vector1d(size, type);

    if(!charVector){
        printf("No memory/ Allocation failed.");
        return 0;
    }

    char *ptr = charVector;
    for(int i=1; i<=5;i++){
        *ptr = (char)(97+i);
        ptr++;
    }
    printf("\n");

    ptr = charVector;
    for(int i=1; i<=5; i++){
        printf("%d : %c\n", i, *ptr);
        ptr++;
    }

    free(charVector);

    /*
    
    // snippet for testing double vectors
    double *doubleVector = (double *)vector1d(size, type);

    if(!doubleVector){
        printf("No memory/ Allocation failed.");
        return 0;
    }

    double *ptr = doubleVector;
    for(int i=1; i<=5;i++){
        *ptr = i * 1.5;
        printf("%d \t", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = doubleVector;
    for(int i=1; i<=5; i++){
        printf("%d : %f\n", i, *ptr);
        ptr++;
    }

    free(doubleVector);
    
    */
    


    /*
    
    // snippet for testing float vectors
    float *floatVector = (float *)vector1d(size, type);

    if(!floatVector){
        printf("No memory/ Allocation failed.");
        return 0;
    }

    float *ptr = floatVector;
    for(int i=1; i<=5;i++){
        *ptr = i * 1.5;
        printf("%d \t", *ptr);
        ptr++;
    }
    printf("\n");

    ptr = floatVector;
    for(int i=1; i<=5; i++){
        printf("%d : %f\n", i, *ptr);
        ptr++;
    }

    free(floatVector);
    
    */

    



    /*
    // the following snippet checks for vector assignment for integer values
    int *intVector = (int *)vector1d(size, type);

    if(!intVector){
        printf("No memory/ Allocation failed.");
        return 0;
    }

    int *ptr = intVector;
    for(int i=1; i<=5;i++){
        *ptr = i;
        ptr++;
    }

    ptr = intVector;
    for(int i=1; i<=5; i++){
        printf("%d : %d\n", i, *ptr);
        ptr++;
    }

    free(intVector);

    */
    

    /* DataStructures\header\vector.c
    int *callocptr = (int *)calloc(5, 5*sizeof(int));
    
    if(!callocptr){
        printf("No memory/ Allocation failed.");
        return 0;
    }

    int *ptr = callocptr;
    for(int i=1; i<=5;i++){
        *ptr = i;
        ptr++;
    }

    ptr = callocptr;
    for(int i=1; i<=5; i++){
        printf("%d : %d\n", i, *ptr);
        ptr++;
    }

    free(callocptr);
    */

    return 0;

}