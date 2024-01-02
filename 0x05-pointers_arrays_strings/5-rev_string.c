#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String pointer
 * Return: return void
 */

void rev_string(char *s)
{
	int length, i, semi;
	char temp;

	for (length = 0; s[length] != '\0'; length++)
	;

	i = 0;

	semi = length / 2;

	while (semi--)
	{
		temp = s[length - i - 1];
		s[length - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
