#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to the first element of the list
 * Return: head node data
 */

int pop_listint(listint_t **head)
{
	int a;
	listint_t *sample;

	if (head == NULL || *head == NULL)
		return (0);
	a = (*head)->n;
	sample = *head;
	*head = (*head)->next;
	free(sample);
	return (a);
}
