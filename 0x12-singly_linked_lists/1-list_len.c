#include "lists.h"

/**
 * list_len - returns the number of elements
 * @h: head node
 * Return: length of node
 */

size_t list_len(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
		a++;
	}
	return (a);
}
