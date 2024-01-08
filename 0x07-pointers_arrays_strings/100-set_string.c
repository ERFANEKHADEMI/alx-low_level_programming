#include "main.h"

/**
 * set_string - function sets the value of a pointer to a char.
 * @s: double pointer for source address.
 * @to:  pointer for target address.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
