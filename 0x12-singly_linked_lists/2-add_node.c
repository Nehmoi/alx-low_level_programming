#include "lists.h"

/**
 * add_note - a function that adds a new node at the beginning of a list
 * @head: head of linked list
 * @str: sring to the linked list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str);
{
	list_t *first;
	unsigned int len = 0;

	while (str[len])
		len++;

	first = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	first->str = strdup(str);
	first->len = len;
	first->next = (*head);
	(*head) = first;

	return (*head);
}
