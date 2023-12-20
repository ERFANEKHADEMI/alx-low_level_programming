#include "stdio.h"

/**
 * Main - This is the main function
 * Description: - prints alphabets 10 times
 * Return:void
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
			i++;
	}
}
