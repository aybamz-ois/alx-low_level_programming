#include <stdio.h>

/**
 * array_iterator - executes a function given as parameter of array
 * @array: the array
 * @size: size of the array
 * @action: function to perform an each array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
