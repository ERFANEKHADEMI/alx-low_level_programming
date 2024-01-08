#include "main.h"

/**
 * _memset - copies memory area and fills memory
 *  with constant bytes
 * @s: the starting address of memory to be filled
 * @b: the desired value
 * @n: the number of bytes to be filled
 *
 * return: returns a changed array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
