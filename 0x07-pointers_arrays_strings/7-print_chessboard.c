#include "main.h"

/**
 * print_chessboard - function prints the chessboard
 * @a: a 2D array
 */

void print_chessboard(char (*a)[8])
{
	unsigned int k, j = 0;

	for (k = 0; k < 64; k++)
	{
		if (k % 8 == 0 && k != 0)
		{
			j = k;
			_putchar('\n');
		}
		_putchar(a[k / 8][k - j]);
	}
	_putchar('\n');
}
