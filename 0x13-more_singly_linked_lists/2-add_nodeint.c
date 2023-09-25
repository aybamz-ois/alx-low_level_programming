#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * @head: pointer to the head pointer
 * @n: integer
 * Return: address or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *anewnode;

	if (head == NULL)
		return (NULL);

	anewnode = malloc(sizeof(listint_t));
	if (anewnode == NULL)
		return (NULL);
	if (*head == NULL)
		anewnode->next = NULL;
	else
		anewnode->next = *head;
	anewnode->n = n;
	*head = anewnode;

	return (*head);
}
