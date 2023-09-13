#include <stdio.h>

/**
 * int_index - searches for an interger
 * @array: the array
 * @size: size of the array
 * @cmp:: function pointers
 * Return: index of the character
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0 ; a < size ; a++)
	{
		if (cmp(array[a]) == 1)
				return (a);
	}
	return (-1);
}
