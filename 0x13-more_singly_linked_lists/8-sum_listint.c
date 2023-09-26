#include "lists.h"

/**
 * sum_listint - returns the sum of all the data
 * @head: pointer to first element of the list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	int addtotal = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		addtotal = addtotal + head->n;
		head = head->next;
	}
	return (addtotal);
}
