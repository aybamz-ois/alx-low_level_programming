#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: head of node
 * @str: string of node
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *anewnode, *temp;
	unsigned int a, count = 0;

	anewnode = malloc(sizeof(list_t));
	if (anewnode == NULL)
		return (NULL);
	anewnode->str = strdup(str);
	for (a = 0 ; str[a] != '\0' ; a++)
		count++;
	anewnode->len = count;
	anewnode->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = anewnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = anewnode;
	}
	return (*head);
}
