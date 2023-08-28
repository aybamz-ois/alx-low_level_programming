#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to search from
 * @accept: string to search
 * Return: accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
