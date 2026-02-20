#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "vector.h"
/*
    allowed "type" values for both the functions
    0 -> int
    1 -> float
    2 -> double
    3 -> char
*/

// assignment function
void * vector1d(size_t dsize, size_t msize){
    if(dsize>0 && msize>0){

        void * ptr = calloc(dsize, dsize * msize);
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
void * vector1dInsertion(void * data, size_t dsize, size_t msize, size_t pos, void * value){
    if(data == NULL){
        printf("Invalid Data.");
        return data;
    }

    data = realloc(data, (dsize + 1) * msize);

    if(data==NULL)
    {
        printf("Insertion Failed.");
        return data;
    }
    
    char * temp = (char *) data;

    int i = 0;
    while(i<pos){
        temp += msize;
        i++;
    }

    memmove(temp + msize, temp,(dsize - pos) * msize);
    memcpy(temp, value, msize);

    return data;

}

// deletion function
// reverse function