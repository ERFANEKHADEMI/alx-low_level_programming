#include "main.h"

/**
 * _strchr - Locates a single character in a string.
 * @s: a pointer to the string.
 * @c: the character being located.
 * return: Pointer for first occurrence of 'c' 
 * or NULL if 'c' is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int x = 0;

	for (; s[x] != '\0'; x++)
		if (s[x] == c)
		return (s + x);
	if (s[x] == c)
	return (s + x);
	return ('\0');
}
