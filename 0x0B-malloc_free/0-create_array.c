#include "main.h"

/**
 * create_array - creates an array
 * @size: size of byte
 * @c: characters in the array
 * Return: pointers
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);

		if (arr == NULL)
			return (NULL);
	for (a = 0 ; a < size ; a++)
		arr[a] = c;
	return (arr);
}
