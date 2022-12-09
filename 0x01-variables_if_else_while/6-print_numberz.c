#include <stdio.h>

/**
 * main - Entry point
 *
 * prints out single digits of base 10 from 0 to 9 in a single line
 *
 * Return: Always 0
 */

int main(void)
{
	int n;
	for (n = 0; n<10; n++)
	{
		putchar(n%10 + '0');
	}

	putchar('\n');
	return (0);
}
