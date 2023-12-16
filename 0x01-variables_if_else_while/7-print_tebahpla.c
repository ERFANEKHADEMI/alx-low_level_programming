#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * * main - This is the main block
 * * Description: print all base 10 single digit numbers.
 * * Followed by a new line
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
