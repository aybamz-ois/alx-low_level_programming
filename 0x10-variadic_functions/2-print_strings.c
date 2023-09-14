#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to be printed between
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list arr;

	va_start(arr, n);
	for (a = 0 ; a < n ; a++)
	{
		char *x = va_arg(arr, char*);

		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arr);
}
