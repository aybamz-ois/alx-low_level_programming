#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a number
 * @n: function parameter
 * Return: -1, 0 or 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
