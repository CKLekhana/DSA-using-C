#ifndef vector_h
#define vector_h

// A simple vector initialization using pointers 

void * vector1d(size_t dsize, size_t msize); // dsize = number of elements; msize = size of the data type

// pos = index to insert value, value = ptr to insertion value
void * vector1dInsertion(void * data, size_t dsize, size_t msize, size_t pos, void * value); 

#endif