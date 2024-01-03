#include "main.h"
#include <stdio.h>

/**
 * print_array - for an array of integers,
 * print `n` elements
 * @a: an array pointer of type int
 * @n: an int integer
 * Description: Numbers have to be space
 * or comma separated
 * Numbers should be displayed in the same order they are stored in array.
 * Only _putchar can be used for printing.
 */

void print_array(int *a, int n)
{
	int character;

	character = 0;
	for (n--; n >= 0; n--, character++)
	{
		printf("%d", a[character]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");

}
