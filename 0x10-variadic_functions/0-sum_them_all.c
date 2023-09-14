#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum
 * @n: number of arguments
 * Return: 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int a;
	int sum = 0;
	va_list arr;

	if (n == 0)
		return (0);
	va_start(arr, n);
	for (a = 0 ; a < n ; a++)
	{
		sum = sum + va_arg(arr, int);
	}
	va_end(arr);
	return (sum);
}
