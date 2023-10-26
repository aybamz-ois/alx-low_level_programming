#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x index y
 * @x: paramter 1
 * @y: parameter 2
 * Return: -1, 0, 1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
