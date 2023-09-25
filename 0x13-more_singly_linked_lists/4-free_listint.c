#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to the head pointer
 * Return: 0
 */

void free_listint(listint_t *head)
{
	listint_t *sample;

	while ((sample = head) != NULL)
	{
		head = head->next;
		free(sample);
	}
}
