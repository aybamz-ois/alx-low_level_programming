#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string to convert;
 * Return: s
 */

char *string_toupper(char *s)
{
	int a;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] = s[a] - 32;
	}
	return (s);
}
