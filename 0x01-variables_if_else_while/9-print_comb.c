#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all possible combination of single digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		if (i == 8)
		{
			putchar('\n');
			return (0);
		}

		putchar(',');
		putchar(' ');
	}
	return (0);
}
