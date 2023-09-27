#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: pointer to the first elemnt of a list
 * Return: a reverse list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *sample;
	listint_t *newsample;

	if (head == NULL || *head == NULL)
		return (NULL);
	sample = *head;
	*head = sample->next;
	sample->next = NULL;

	while (*head != NULL)
	{
		newsample = (*head)->next;
		(*head)->next = sample;
		sample = *head;
		if (newsample == NULL)
			return (*head);
		*head = newsample;
	}
	if (*head == NULL)
	{
		*head = sample;
		return (*head);
	}
	return (NULL);
}
