#ifndef lcthw_List_algos_h
#define lcthw_List_algos_h

#include <stdio.h>
#include "lcthw/list.h"

typedef int (*List_compare)(const char *s1, const char *s2);
void ListNode_swap(ListNode *node1, ListNode *node2);
int List_bubble_sort(List *list, List_compare cmp);
List *List_merge_sort(List *list, List_compare cmp);

#endif
