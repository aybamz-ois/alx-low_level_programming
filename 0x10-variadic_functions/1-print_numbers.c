#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @seperator: the string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arr;

	va_start(arr, n);
	for (a = 0 ; a < n ; a++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(arr, int));
			if (a != n - 1)
			printf("%s", separator);
		}
		else
			printf("%d", va_arg(arr, int));
	}
	putchar('\n');
	va_end(arr);
}
