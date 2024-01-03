#include "main.h"
/**
 * puts2 - Prints every line
 * of a string
 * @s: Points to string
 * Return: return void
 */

void puts2(char *str)
{
    int j = 0;
    while (str[j] != '\0')
    {
        if (j % 2 == 0)
        {
            _putchar(str[j]);
        }

        j++;
    }
    _putchar('\n');
}
