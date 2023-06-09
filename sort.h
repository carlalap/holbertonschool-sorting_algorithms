#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/** Algorithms section **/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
listint_t *create_listint(const int *array, size_t size);
void selection_sort(int *array, size_t size);
void int_swap(int *current, int *next);
void quick_sort(int *array, size_t size);
void swap_pos(int **array, size_t first, size_t second);
size_t partition(int **array, size_t lower, size_t upper, size_t size);
void sorter(int **array, size_t lb, size_t ub, size_t size);



#endif
