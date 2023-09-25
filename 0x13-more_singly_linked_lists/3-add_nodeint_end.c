#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to pointer head
 * @n: integer
 * Return: head or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *anewnodend;
	listint_t *tmp;

	(void) tmp;

	anewnodend = malloc(sizeof(listint_t));
	if (anewnodend == NULL)
		return (NULL);
	anewnodend->n = n;
	anewnodend->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = anewnodend;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = anewnodend;
	}
	return (*head);
}
