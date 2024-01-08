#include "main.h"

/**
 * _strstr - function locates a substring in a string.
 * @haystack: Pointer for string to search in.
 * @needle: pointer for substring to search for.
 * Return: returns pointer for beginning of 
 * the located substring,
 * if the substring is not found, returns NULL
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int k, p;

	if (*needle == '\0')
		return (haystack);
	for (k = 0; haystack[k] != '\0'; k++)
	{
		for (p = 0; needle[p] != '\0'; p++)
		{
			if (haystack[k + p] != needle[p])
				break;
		}
		if (needle[p] == '\0')
		return (haystack + k);
	}
	return ('\0');
}
