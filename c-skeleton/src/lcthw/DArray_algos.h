/*
    DArray_algos.h
    Created by: baz
    Date: 2019-03-13 11:36
*/
#ifndef darray_algos_h
#define darray_algos_h

#include "lcthw/DArray.h"

typedef int (*DArray_compare)(const void *a, const void *b);

int DArray_qsort(DArray *array, DArray_compare cmp);

int DArray_heapsort(DArray *array, DArray_compare cmp);

int DArray_mergesort(DArray *array, DArray_compare cmp);

#endif