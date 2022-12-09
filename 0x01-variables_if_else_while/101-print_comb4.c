#include <stdio.h>

/**
 * main - Entry point
 *
 * prints all different possible combination of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	for (; i < 8; i++)
	{
		int n = i + 1;

		for (; n < 9; n++)
		{
			int t = n + 1;

			for (; t < 10; t++)
			{
				putchar(i % 10 + '0');
				putchar(n % 10 + '0');
				putchar(t % 10 + '0');

				if (i == 8)
				{
					putchar('\n');
					return (0);
				}

				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
