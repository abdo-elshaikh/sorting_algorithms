#ifndef _SORT_H
#define _SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_t - Doubly linked list node
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
/*print functions*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
/*sort functions*/
void bubble_sort(int *array, size_t size);
listint_t *create_listint(const int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_lomuto(int *array, int low, int high);
size_t lomuto_partition(int *array, int low, int high);
#endif