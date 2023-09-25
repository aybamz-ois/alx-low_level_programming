#include "lists.h"

/**
 * listint_len - it counts the number of elements
 * @h: head pointer
 * Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t b;

	if (h == NULL)
		return (0);
	for (b = 0 ; h != NULL ; b++)
	{
		h = h->next;
	}
	return (b);
}
