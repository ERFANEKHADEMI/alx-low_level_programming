#include "main.h"
/**
 * print_rev - Prints the given string in reverse
 * followed by a new line
 * @s:string  pointer
 * Return: return void
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
	{
		k++;
	}
	while (k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
