#include "main.h"
/**
 * puts_half - Function prints second half of
 * every string
 * @str: An array string
 * Description: Function prints (length - 1) / 2
 * if the chars of the string are odd numbers
 */

void puts_half(char *str)
{
	int h;

	for (h = 0; str[h] != '\0'; h++)
	h++;

	for (h /= 2; str[h] != '\0'; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
