#include <stdio.h>
/**
 * * main - This is the main block
 * * Description: prints the alphabet in lowercase,
 *    * then in uppercase.
 *     * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
