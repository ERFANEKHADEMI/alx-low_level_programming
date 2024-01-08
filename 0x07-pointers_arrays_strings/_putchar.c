#include <unistd.h>

/**
 * _putchar - function will write the character c to stdout
 * @c: Character to print
 *
 * return: 1 on success and
 * -1 on error. Errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
