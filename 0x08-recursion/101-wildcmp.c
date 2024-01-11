#include "main.h"
#include <stdio.h>

/**
 * wildcmp - function checks the code for Holberton School students.
 * @s1: string value
 * @s2: string value
 * @a: int value
 * @b: int value
 * @wildChar: int value
 * Return: returns 0 always.
 */
int checker(char *s1, char *s2, int a, int b, int wildChar);
int wildcmp(char *s1, char *s2)
{
return (checker(s1, s2, 0, 0, -1));
}

/**
 * checkLast - check the last char of s2 when s1 ends
 * @str: string value
 * @i: int value
 * Return: 0 or 1
 */
int checkLast(char *str, int i)
{
if (str[i] == '*')
	return (checkLast(str, i + 1));
else if (str[i] == '\0')
	return (1);

return (0);

}
/**
 * checker - a helper function
 * @s1: string
 * @s2: string
 * @a: int value
 * @b: int value
 * @wildChar: int
 * Return: returns 0 always.
 */
int checker(char *s1, char *s2, int a, int b, int wildChar)
{

if (s1[a] != '\0')
{
	if (s2[b] == '\0')
		return (0);
	else if (s2[b] == '*')
	{
		if (s2[b + 1] == '*')
			return (checker(s1, s2, a, b + 1, b));
		else if (s2[b + 1] == s1[a])
			return (checker(s1, s2, a, b + 1, b));
		else if (s1[a + 1] != s2[b + 1])
			return (checker(s1, s2, a + 1, b, b));
		else if (s1[a + 1] == s2[b + 1])
			return (checker(s1, s2, a + 1, b + 1, b));
	}
	else if ((s1[a] == s2[b]) || (s2[b] == '*' && s2[b + 1] == s1[a + 1]))
		return (checker(s1, s2, a + 1, b + 1, wildChar));

	if (wildChar == -1)
		return (0);

	return (checker(s1, s2, a, wildChar, wildChar));

}
if (s2[b] != '\0')
	return (checkLast(s2, b));

return (1);

}
