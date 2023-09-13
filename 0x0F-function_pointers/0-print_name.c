#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function to print to
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
