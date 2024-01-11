#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function checks if n is prime
 * @resp: int value
 * @n: int value
 * Return: 0 or 1
 */

int check_prime(int n, int resp);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check if n is divisible by all numbers less than it.
 * @n: int value
 * @resp: int value
 * Return: int
 */

int check_prime(int n, int resp)
{

if (resp >= n && n > 1)
	return (1);
else if (n % resp == 0 || n <= 1)
	return (0);
else
	return (check_prime(n, resp + 1));
}
