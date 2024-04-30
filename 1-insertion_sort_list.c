#include "sort.h"

/**
 * insertion_sort_list - a function that implements insertion sort
 * @list: a double linked list of type listint_t
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *prev_node, *next_node; /**prev_addr*/

	temp = *list;

	while (temp)
	{
		prev_node = temp->prev;
		next_node = temp->next;

		while ((next_node->n < prev_node->n) && (prev_node != NULL))
			prev_node = prev_node->prev;
		/**
		prev_node->next = next_node->next;
		next_node->next = prev_node;
		prev_addr = prev_node->prev;
		prev_node->prev = next_node;
		next_node->next = prev_node;
		next_node->prev = prev_addr;
		*/
		temp = temp->next;
	}
}
