#include "main.h"
/**
 * _strlen - Function obtains the length
 * of a given string
 * @s: string pointer
 * Return: return the length
 */

int _strlen(char *s)
{
	int character = 0;

	while (s[character])
		character++;
	return (character);
}
