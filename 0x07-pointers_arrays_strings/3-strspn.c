#include "main.h"

/**
 * _strspn - function gets length of a prefix substring.
 * @s: pointer for initial segment string.
 * @accept: pointer for string of accepted bytes.
 * return: returns the number of accepted bytes 
 * in the initial segment of 's'.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	int found;

	for (a = 0; s[a] != '\0'; a++)
	{
		found = 1;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				found = 0;
				break;
			}
		}
		if (found == 1)
			break;
	}
	return (a);
}
