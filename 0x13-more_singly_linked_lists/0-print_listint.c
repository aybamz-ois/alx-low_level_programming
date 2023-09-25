#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: head of the node
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t a;

	if (h == NULL)
		return (0);
	for (a = 0 ; h != NULL ; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
