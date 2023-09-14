#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int a, b;

	char *x;
	va_list arr;

	va_start(arr, format);

	a = 0;
	while (format != NULL && format[a] != '\0')
	{
		switch (format[a])
		{
			case 'i':
				printf("%d", va_arg(arr, int));
				b = 0;
				break;
			case 'f':
				printf("%f", va_arg(arr, double));
				b = 0;
				break;
			case 'c':
				printf("%c", va_arg(arr, int));
				b = 0;
				break;
			case 's':
				x = va_arg(arr, char *);
				if (x == NULL)
					x = "(nil)";
				printf("%s", x);
				break;
			default:
				b = 1;
				break;
		}
		if (format[a + 1] != '\0' && b == 0)
			printf(", ");
		a++;
	}
	printf("\n");
	va_end(arr);
}
