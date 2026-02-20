# vector

Last Edited: 20/02/2026
Link: https://github.com/CKLekhana/DSA-using-C/tree/main/header/vector
functions: vector1d, vector1dInsertion

This header file implements a dynamic vector and associated functions.

---

1. vector1d function
    
    ```c
    void * vector1d(size_t dsize, size_t msize)
    ```
    
    Input:
    
    1. size_t dsize → refers to the number of elements the dynamic 1D vector has.
    2. size_t msize → refers to the size (in bytes) consumed by each element (depends on type)
    
    Output:
    
    1. void * ptr → pointer to the memory allocated via calloc function
    
    Sample:
    
    ```c
    
    int *intVector = (int *)vector1d(5, sizeof(int);
    ```
    
2. vector1dInsertion
    
    ```c
    void * vector1dInsertion(void * data, size_t dsize, size_t msize, size_t pos, void * value)
    ```
    
    Input:
    
    1. void * data → ptr to existing 1D vector
    2. size_t dsize → number of elements in 1D vector 
    3. size_t msize → size (in bytes) of each element in the vector
    4. size_t pos → insertion position
    5. void * value → ptr to the address holding insertion value
    
    Output: 
    
    1. void * data → updated input 1D vector
    
    Sample:
    
    ```c
    int value = 100;
    intVector = vector1dInsertion(intVector, 5, sizeof(int), 2, &value);
    ```