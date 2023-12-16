#include <stdio.h>
/**
 * * main - This is the main block
 * * Description: print all base 10 single digit numbers.
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		c++;
	}

	putchar('\n');
	return (0);
}
