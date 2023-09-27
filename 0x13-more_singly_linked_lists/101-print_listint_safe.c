#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: pointer to the first element on list
 * @Return: no return
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - prints a list
 * @head: pointer to the first element in a list
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *a, *m, *d;

	a = NULL;
	while (head != NULL)
	{
		m = malloc(sizeof(listp_t));

		if (m == NULL)
			exit(98);
		m->p = (void *)head;
		m->next = a;
		a = m;

		d = a;
		while (d->next != NULL)
		{
			d = d->next;
			if (head == d->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&a);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&a);
	return (nnodes);
}
