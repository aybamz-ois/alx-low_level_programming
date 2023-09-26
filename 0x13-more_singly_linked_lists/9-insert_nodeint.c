#include "lists.h"
/**
 * form_new_node - function to create new node
 * @n: the data of the node
 * Return: pointer to node
 */

listint_t *form_new_node(int n)
{
	listint_t *anewnode;

	anewnode = malloc(sizeof(listint_t));
	if (anewnode == NULL)
		return (NULL);
	anewnode->n = n;
	anewnode->next = NULL;

	return (anewnode);
}

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first element of the new node
 * @idx: index to position new node
 * @n: the data of new node
 * Return: address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *temp;
	listint_t *temp_one;
	listint_t *anewnode;

	temp = *head;
	if (head == NULL)
		return (NULL);
	anewnode = form_new_node(n);
	if (anewnode == NULL)
	{
		*head = anewnode;
		return (anewnode);
	}

	if (idx == 0)
		*head = anewnode;
	for (a = 0 ; a < idx - 1 && temp != NULL && idx != 0 ; a++)
		temp = temp->next;
	if (temp == NULL)
		return (NULL);
	if (idx == 0)
		anewnode->next = temp;
	else
	{
		temp_one = temp->next;
		temp->next = anewnode;
		anewnode->next = temp_one;
	}
	return (anewnode);
}
