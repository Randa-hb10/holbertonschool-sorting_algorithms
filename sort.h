#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 */
typedef struct listint_s
{
        const int n;
        struct listint_s *prev;
        struct listint_s *next;
} listint_t;

/* Function prototypes */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* Sorting algorithms prototypes */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);  /* أضف هذا السطر هنا! */

/* Helper functions */
void swap_ints(int *a, int *b);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
int lomuto_partition(int *array, int low, int high, size_t size);
void quick_sort_recursive(int *array, int low, int high, size_t size);

#endif /* SORT_H */
