/*
    list_algos.h
    Created by: baz
    Date: 2019-03-11 18:39
*/

#ifndef lcthw_List_algos_h
#define lcthw_List_algos_h

#include "lcthw/List.h"

typedef int (*List_compare)(const void *a, const void *b);

int List_bubble_sort(List *list, List_compare cmp);

List *List_merge_sort(List *list, List_compare cmp);

#endif