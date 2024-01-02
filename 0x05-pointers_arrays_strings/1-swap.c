#include "main.h"
/**
 * swap_int - Function swaps integer values of 2 ints
 * @a: first integer pointer
 * @b: second integer pointer
 * return: void
 */

void swap_int(int *a, int *b)
{
	int old_a  = *a;
	*a = *b;
	*b = old_a;
	
}
