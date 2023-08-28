#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: destination location
 * @src: source location
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0 ; a < n ; a++)
		dest[a] = src[a];
	return (dest);
}
