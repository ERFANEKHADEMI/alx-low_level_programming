#include "main.h"
/**
 * swap_int - Function swaps integer values of 2 ints
 * @a: first integer pointer
 * @b: second integer pointer
 * return: void
 */

void swap_int(int *a, int *b)
{
	*a *= *b;
	*b = *a / *b;
	*a = *a / *b;
}
