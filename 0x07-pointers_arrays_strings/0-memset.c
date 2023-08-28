#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		s[a] = b;
	return (s);
}
