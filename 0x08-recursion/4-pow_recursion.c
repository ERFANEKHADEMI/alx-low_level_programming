#include "main.h"
/**
 * _pow_recursion - The function will search
 * a string for any of a set of bytes.
 * @x: the base
 * @y: the exponent
 * Return: Returns pointer to the byte in `s`
 * if it matches one of the bytes in `accept`
 * or NULL if such a byte is not found.
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
	return (-1);
else if (y == 1)
	return (x);
else if (y == 0)
	return (1);

return (x * _pow_recursion(x, y - 1));

}
