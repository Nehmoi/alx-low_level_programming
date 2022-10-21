#include <stdio.h>
#include "lists.h"

/**
 * size_t print_list - a function that all the elements of a list_t list
 * @h: pointer to singly linked list
 * Return: all the elements in the list
 */

size_t print_list(const list_t *h);
{
	size_t elelst;

	elelst = 0;
	while (h != NULL)
	{
		if (h->str = NULL)
			printf("%d %s\n", 0, "(nil)");
		else
			printf("%d %s\n", h->len, h->str);
		h = h->next;
		elelst++;
	}
	return (elelst);
}
