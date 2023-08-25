#include "main.h"

/**
 * reverse_array - reverses the comtent of an array of integers
 * @a: array name
 * @n: number of the element of an array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0 ; b < n / 2 ; b++)
	{
		c = a[b];
		a[b] = a[n - 1 - b];
		a[n - 1 - b] = c;
	}
}
