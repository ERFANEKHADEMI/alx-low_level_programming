#include "main.h"
/**
 * _strlen_recursion - function returns the
 *  string, and length.
 * @s: string pointer
 * Return: int
 */

int _strlen_recursion(char *s)
{
int x = 0;

if (*s > '\0')
{
	x += _strlen_recursion(s + 1) + 1;
}

return (x);
}
