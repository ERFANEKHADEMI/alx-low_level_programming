#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main block
 * Desc: print all base 10 single digit numbers.
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}

	putchar('\n');
	return (0);
}
