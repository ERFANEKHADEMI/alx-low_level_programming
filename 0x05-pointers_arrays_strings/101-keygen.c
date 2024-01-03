#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * main - functions generates passwords
  * randomly for 101-crackme program
  * Return: function returns zero
  */
int main(void)
{
	int summation;
	char k;

	srand(time(NULL));
	while (summation <= 2645)
	{
		k = rand() % 128;
		summation += k;
		putchar(k);
	}
	putchar(2772 - summation);
	return (0);
}
