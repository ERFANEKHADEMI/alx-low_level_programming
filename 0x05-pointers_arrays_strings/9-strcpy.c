#include "main.h"
/**
 * *_strcpy -  function copies the string pointed to by src
 * including the terminating null byte (\0)
 * @src: char type string
 * @dest: char type string
 * Description: Copy the string pointed to
 * by `src` pointer  to
 * buffer pointed to by `dest`
 * Return: Returns the pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');

	return (dest);
}
