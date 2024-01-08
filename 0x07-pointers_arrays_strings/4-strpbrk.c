#include "main.h"

/**
 * _strpbrk - function searches a string for any of a set of bytes.
 * @s: pointer for searched string
 * @accept: pointer for set of bytes.
 * return: returns pointer for first occurrence 
 * of a matching byte in 's',
 * or NULL if none is found.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				return (s + x);
		}
	}
	return ('\0');
}
