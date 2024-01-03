#include "main.h"
/**
 * _atoi - should convert a string to an integer type.
 * @s: the provided string for conversion.
 * Return: Returns integer value
 * of the converted string.
 */

int _atoi(char *s)
{

	int state = 1;
	unsigned int digit = 0;

	do {

		if (*s == '-')
			state *= -1;

		else if (*s >= '0' && *s <= '9')
			digit = (digit * 10) + (*s - '0');

		else if (digit > 0)
			break;

	} while (*s++);

	return (digit * state);
}
