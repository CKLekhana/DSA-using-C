#include <stdio.h>
#include <stdlib.h>
#include "vector.h"
/*
    allowed "type" values for both the functions
    0 -> int
    1 -> float
    2 -> double
    3 -> char
*/

void * ptrAssignment(size_t size, int type){
    switch (type)
        {
        case 0:
            return calloc(size, size * sizeof(int));
            break;
        case 1:
            return calloc(size, size * sizeof(float));
            break;
        case 2: 
            return calloc(size, size * sizeof(double));
            break;
        case 3:
            return calloc(size, size * sizeof(char));
            break;
        default:
            return NULL;
        }
}

// assignment function
void * vector1d(size_t size, int type){
    if(size!=0 && (type >=0 && type<4)){
        void * ptr = ptrAssignment(size, type);
        if(!ptr)
            {
                printf("ptrAssignment failure");
                return NULL;
            }
        else 
        return ptr;
    }
    return NULL;
}

// insertion function


// deletion function
// reverse function