#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list
 * Return: nothing
 */
void free_listp2(listp_t **head)
{
	listp_t *sample;
	listp_t *one;

	if (head != NULL)
	{
		one = *head;
		while ((sample = one) != NULL)
		{
			one = one->next;
			free(sample);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free a list
 * @h: head of a list
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes= 0;
	listp_t *a, *m, *d;
	listint_t *one;

	a = NULL;
	while (*h != NULL)
	{
		m = malloc(sizeof(listp_t));

		if (m == NULL)
			exit(98);

		m->p = (void *)*h;
		m->next = a;
		a = m;

		d = a;

		while (d->next != NULL)
		{
			d = d->next;
			if (*h == d->p)
			{
				*h = NULL;
				free_listp2(&a);
				return (nnodes);
			}
		}
		one = *h;
		*h = (*h)->next;
		free(one);
		nnodes++;
	}
	*h = NULL;
	free_listp2(&a);
	return (nnodes);
}
