#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of list
 * @head: pointer to the first element of node
 * @index: the node that is to be returned
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	for (c = 0; c < index ; c++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
