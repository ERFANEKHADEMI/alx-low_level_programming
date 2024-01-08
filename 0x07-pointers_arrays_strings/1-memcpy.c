#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: memory stored
 * @src: copied memory
 * @n: the number of bytes to be copied
 *
 * Return: copied mem with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
