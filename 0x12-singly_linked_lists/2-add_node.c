#include "lists.h"

/**
 * add_node - adds anew node at the beginning of a list
 * @head: head of node
 * @str: string to store
 * Return: address of new element or NULL if otherwise
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *anewnodes;
	unsigned int a, count = 0;

	anewnodes = malloc(sizeof(list_t));
	if (anewnodes == NULL)
		return (NULL);
	anewnodes->str = strdup(str);
	for (a = 0 ; str[a] != '\0' ; a++)
		count++;
	anewnodes->len = count;
	anewnodes->next = *head;
	*head = anewnodes;

	return (*head);
}
