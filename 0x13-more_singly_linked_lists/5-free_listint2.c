#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: pointer to the first element of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *sample;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		sample = (*head)->next;
		free(*head);
		*head = sample;
	}
	free(*head);
	*head = NULL;
}
