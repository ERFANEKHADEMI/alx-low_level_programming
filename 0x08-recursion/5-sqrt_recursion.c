#include "main.h"
/**
 * _sqrt_recursion - function finds the natural square root by recursion
 * @n: int
 * @val: square root
 * Return: returns an int 'n'
 */
int square(int n, int val);
int _sqrt_recursion(int n)
{
return (square(n, 1));
}

/**
 * square - find square root
 * @n: input int
 * @val: square root value of int `n`
 * Return: int
 */

int square(int n, int val)
{

if (val * val == n)
	return (val);
else if (val * val < n)
	return  (square(n, val + 1));
else
	return (-1);

}
