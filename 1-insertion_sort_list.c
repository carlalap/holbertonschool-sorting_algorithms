#include "sort.h"

/**
 * insertion_sort_list - Sort doubly linked list of integers in ascending
 *                       order using the Insertion sort algorithm.
 * @list: Pointer to a pointer to the head node of the list.
 */
void insertion_sort_list(listint_t **list)
{
	if (*list == NULL || (*list)->next == NULL)
		return;

	listint_t *current, *next_node, *prev_node, *temp_node;

	for (current = (*list)->next; current != NULL; current = next_node)
	{
		next_node = current->next;

		while (current->prev != NULL && current->n < current->prev->n)
		{
			prev_node = current->prev;
			temp_node = current->next;

			if (prev_node->prev != NULL)
				prev_node->prev->next = current;
			else
				*list = current;

			current->prev = prev_node->prev;
			prev_node->prev = current;
			prev_node->next = temp_node;

			if (temp_node != NULL)
				temp_node->prev = prev_node;

			current->next = prev_node;
			prev_node = current->prev;

			print_list(*list);
		}
	}
}

