#include "main.h"
/**
 * _puts - Function prints a string followed
 * by a new line
 * @str: String pointer of the input
 * Return: return void
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j])
		_putchar(str[j]);
		j++;
	_putchar('\n');
}
