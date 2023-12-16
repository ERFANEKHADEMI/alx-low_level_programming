#include <stdlib.h>
#include <stdio.h>
/**
 * * main - This is the main block
 * * Description: print all base 10 single digit numbers.
 * Return: 0
 */
int main(void)
{
	char c;
	char d = '0';

	while (d <= '9')
	{
		putchar(d);
		d++;
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
