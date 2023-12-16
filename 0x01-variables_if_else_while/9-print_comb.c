#include <stdio.h>
#include <stdlib.h>
/**
 * * main - This is the main block
 * * Description: prints all base 10 single digit numbers 10
 * Return: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
