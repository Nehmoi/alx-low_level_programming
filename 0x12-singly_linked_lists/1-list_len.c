#include "lists.h"

/**
 * list_len - a function that returns the numbers of elements in a linked list
 * @h: singly linked list
 * Return: the numbers of the elements in the linked list
 */

size_t list_len(const list_t *h);
{
	size_t number_of_nodes;

	number of nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
