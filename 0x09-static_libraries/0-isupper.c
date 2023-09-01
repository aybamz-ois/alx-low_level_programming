#include "main.h"

/**
 * _isupper - function that check for upper case character
 * @c: function parameter
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
