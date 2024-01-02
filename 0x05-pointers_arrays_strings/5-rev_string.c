#include "main.h"
/**
 * rev_string - Reverses a string
 * @s: String pointer
 * Return: return void
 */

void rev_string(char *s)
{
	int t = 0;
	int k = 0;

	while (s[t])
	{
		t++;
	}
	while (s[k])
	{
		s[k] = s[t];
		k++;
	}
}
